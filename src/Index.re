let slideSeparator = "\n";
let slideContentSeparator = "";
let fixedSlideIndicator = "";

Js.Promise.(
  Fetch.fetch("slide-content.md")
  |> then_(Fetch.Response.text)
  |> then_(text => Array.to_list(Js.String.split(slideSeparator, text)) |> resolve)
  |> then_(slideArray => List.filter(s => String.length(s) > 0, slideArray) |> resolve)
  |> then_(slideArray => 
    List.map(slide => Js.String.startsWith(fixedSlideIndicator, slide) ?
                        [slide] :
                        Array.to_list(Js.String.split(slideContentSeparator, slide)), slideArray) 
    |> resolve)
  |> then_(slideContent => ReactDOMRe.renderToElementWithId(<Slides content={slideContent} />, "index") |> resolve)
);