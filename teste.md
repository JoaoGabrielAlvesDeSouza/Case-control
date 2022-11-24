**Conversão entre lower case e upper case**

- Curso normal : O usuário digita uma frase qualquer de até 100 caracteres. Em seguida seleciona se deseja a frase em maiúscula ou minúscula e então, o resultado é mostrado na tela
- Curso alternativo : O usuário digita uma frase maior que 100 caracteres, logo o programa só trabalhará com os 100 primeiros caracteres.
- Curso de exceção : Caso seja passada uma frase nula ou vazia, uma mensagem de erro aparece informando que palavras nulas ou vazias não são aceitas.

---

**Programa de conversão entre palavras minúsculas e maiúsculas**

****Entradas****

- String a ser convertida
- Opção de conversão

****Saídas****

- Frase com a alteração desejada
- Frase incompleta com alteração desejada
- Mensagem de erro devido a frase nula ou vazia

---

****Casos de teste****

string | opção | saída esperada
-------|-------|---------------
casa   | 1     | casa
luz    | 2     | LUZ
AguA   | 1     | agua
MUro   | 2     | MURO
NULL   | 1     | palavras vazias ou nulas não são aceitas
