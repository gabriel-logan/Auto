import { Open_Sans, Roboto_Condensed } from "next/font/google";

const robotoCondensed = Roboto_Condensed({
  subsets: ["latin"],
});

const openSans = Open_Sans({
  subsets: ["latin"],
});

export default function Home() {
  const teste = "teste";
  return (
    <main className="flex min-h-screen flex-col items-center justify-between p-24">
      <h1 className={`mb-0 text-balance lg:mb-1 ${robotoCondensed.className}`}>
        I&apos;m comming (:
      </h1>{" "}
      <p className={`font-bold ${openSans.className}`}>{teste}</p>
    </main>
  );
}
