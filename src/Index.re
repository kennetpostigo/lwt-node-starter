open ReasonNode;

let app = {
  Node.andThen(Fs.mkdir("myDir"), value =>
    Node.resolved(prerr_endline("Directory has been made"))
  )
  |> ignore;
  ();
};

Node.run(app);