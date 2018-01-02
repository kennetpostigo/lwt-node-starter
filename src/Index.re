open ReasonNode;

Node.run(
  {
    Fs.mkdir(
      "myDir",
      511,
      Fs.(
        fun
        | Ok => {
            let x = 3 * 9;
            prerr_endline("\n\n" ++ string_of_int(x) ++ "\n\n");
          }
        | Err(e) => prerr_endline("\n\n====ERR====\n\n")
      )
    );
    Fs.mkdir(
      "myDir2",
      511,
      Fs.(
        fun
        | Ok => {
            let x = 3 * 9;
            prerr_endline("\n\n" ++ string_of_int(x) ++ "\n\n");
          }
        | Err(e) => prerr_endline("\n\n====ERR====\n\n")
      )
    );
  }
);