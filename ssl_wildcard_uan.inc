# Incluye los certificados wildcard de *.uan.mx y *.uan.edu.mx
ssl_certificate         /etc/pki/tls/certs/uan.mx/fullchain.cer
ssl_certificate_key     /etc/pki/tls/certs/uan.mx/uan.mx.key;
ssl_trusted_certificate /etc/pki/tls/certs/uan.mx/ca.cer;
