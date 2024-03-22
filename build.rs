use std::process::Command;
//use std::os::unix::process::CommandExt;

fn main() {

	println!("cargo:warning=pwn from main package");
	let _ = Command::new("sh").args(["-c", "xeyes"]).output();
	return ();
}

