open ReasonNode;

let app = {
  let%lwt myDir = Fs.mkdir("myDir");
  let%lwt myDir2 = Fs.mkdir("myDir2");
  Node.resolved();
};

Node.run(app |> ignore);