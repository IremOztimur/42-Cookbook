# Generated by Django 4.0 on 2024-09-26 22:55

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('api', '0001_initial'),
    ]

    operations = [
        migrations.AlterField(
            model_name='profil',
            name='photo',
            field=models.ImageField(blank=True, null=True, upload_to='profil_photo/'),
        ),
    ]
