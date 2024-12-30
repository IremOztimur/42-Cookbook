# Inception

<p align="center">
  <img src="https://img.shields.io/badge/Docker-2496ED?style=for-the-badge&logo=docker&logoColor=white">
  <img src="https://img.shields.io/badge/WordPress-21759B?style=for-the-badge&logo=wordpress&logoColor=white">
  <img src="https://img.shields.io/badge/Nginx-009639?style=for-the-badge&logo=nginx&logoColor=white">
  <img src="https://img.shields.io/badge/MariaDB-003545?style=for-the-badge&logo=mariadb&logoColor=white">
</p>

## 📝 About

Inception is a System Administration project at 42 School that focuses on Docker containerization. The project involves setting up a small infrastructure composed of different services under specific rules using Docker Compose.

## 🎯 Key Features

- **Containerized Services:**
  - NGINX with TLSv1.3
  - WordPress + php-fpm
  - MariaDB
  - cAdvisor (bonus)
- **Persistent Volumes**
- **Custom Docker Network**
- **Secure Configuration**
- **Automated Setup**

## 🛠️ Technical Stack

- Docker & Docker Compose
- NGINX
- WordPress
- MariaDB
- PHP-FPM
- Shell Scripting
- SSL/TLS

## 🚀 Getting Started

### Prerequisites

- Docker
- Docker Compose
- Make

### Installation

1. Clone the repository:
```bash
git clone <repository-url>
cd inception
```

2. Create necessary directories:
```bash
make
```

### Usage

- **Start services:**
```bash
make
```

- **Stop services:**
```bash
make down
```

- **Rebuild containers:**
```bash
make re
```

- **Clean up:**
```bash
make clean
```

- **Check status:**
```bash
make status
```

## 🔍 Service Configuration

### WordPress
- Accessible via HTTPS
- Running with php-fpm
- Connected to MariaDB database

### NGINX
- Only entry point to infrastructure
- TLSv1.3 protocol
- Port 443 (HTTPS)

### MariaDB
- Secure database configuration
- Persistent data storage
- Custom user setup

## 📁 Project Structure

```
inception/
├── Makefile
├── srcs/
│   ├── docker-compose.yml
│   ├── .env
│   └── requirements/
│       ├── nginx/
│       ├── wordpress/
│       ├── mariadb/
│       └── bonus/
```

## 🔐 Environment Variables

Environment variables are stored in `srcs/.env` and include:
- WordPress configuration
- Database credentials
- Domain settings