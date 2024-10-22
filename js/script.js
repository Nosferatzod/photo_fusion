document.getElementById('contact-form').addEventListener('submit', function(event) {
    event.preventDefault(); // Impede o envio padrão do formulário
    alert('Mensagem enviada! Obrigado por entrar em contato.');
    this.reset(); // Limpa o formulário após o envio
});