#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801DBA44(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801DBA44;

loc_801DBA44:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    ctx->lr = 0x801DBA64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80207F90u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801DBA68:
{
    r31 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DBAC4;
    }
}

loc_801DBA70:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(5));
}

loc_801DBA74:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DBABC;
    }
}

loc_801DBA78:
{
    r3 = (r13 + -28280);
    ctx->lr = 0x801DBA80u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80208B74u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-5));
}

loc_801DBA84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DBAA4;
    }
}

loc_801DBA88:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DBA98;
    }
}

loc_801DBA8C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-15));
}

loc_801DBA90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DBAA4;
    }
}

loc_801DBA94:
{
    goto loc_801DBAB4;
}

loc_801DBA98:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-3));
}

loc_801DBA9C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DBAB4;
    }
}

loc_801DBAA0:
{
    goto loc_801DBAAC;
}

loc_801DBAA4:
{
    r3 = -46;
    goto loc_801DBDE0;
}

loc_801DBAAC:
{
    r3 = -38;
    goto loc_801DBDE0;
}

loc_801DBAB4:
{
    r3 = -43;
    goto loc_801DBDE0;
}

loc_801DBABC:
{
    r3 = -43;
    goto loc_801DBDE0;
}

loc_801DBAC4:
{
    r3 = r29;
    r4 = (r1 + 8);
    ctx->lr = 0x801DBAD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8019C3E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801DBAD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DBAE0;
    }
}

loc_801DBAD8:
{
    r3 = -1;
    goto loc_801DBDE0;
}

loc_801DBAE0:
{
    r0 = 63;
    r3 = r29;
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r0));
    r4 = (r1 + 8);
    ctx->lr = 0x801DBAF4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8019C678u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801DBAF8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DBB04;
    }
}

loc_801DBAFC:
{
    r3 = -1;
    goto loc_801DBDE0;
}

loc_801DBB04:
{
    r30 = (r13 + -28280);
    r4 = r29;
    r3 = r30;
    ctx->lr = 0x801DBB14u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80208288u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 + 0);
}

loc_801DBB1C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(45057))) {
        goto loc_801DBB28;
    }
}

loc_801DBB20:
{
    r0 = -20;
    goto loc_801DBBF0;
}

loc_801DBB28:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801DBB2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DBB84;
    }
}

loc_801DBB30:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(5));
}

loc_801DBB34:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DBB7C;
    }
}

loc_801DBB38:
{
    r3 = (r13 + -28280);
    ctx->lr = 0x801DBB40u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80208B74u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-5));
}

loc_801DBB44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DBB64;
    }
}

loc_801DBB48:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DBB58;
    }
}

loc_801DBB4C:
{
}

loc_801DBB50:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-15))) {
        goto loc_801DBB64;
    }
}

loc_801DBB54:
{
    goto loc_801DBB74;
}

loc_801DBB58:
{
}

loc_801DBB5C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(-3))) {
        goto loc_801DBB74;
    }
}

loc_801DBB60:
{
    goto loc_801DBB6C;
}

loc_801DBB64:
{
    r0 = -46;
    goto loc_801DBBF0;
}

loc_801DBB6C:
{
    r0 = -38;
    goto loc_801DBBF0;
}

loc_801DBB74:
{
    r0 = -43;
    goto loc_801DBBF0;
}

loc_801DBB7C:
{
    r0 = -43;
    goto loc_801DBBF0;
}

loc_801DBB84:
{
    r3 = r30;
    r4 = 1;
    ctx->lr = 0x801DBB90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80208CF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801DBB94:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801DBBEC;
    }
}

loc_801DBB98:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(5));
}

loc_801DBB9C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DBBE4;
    }
}

loc_801DBBA0:
{
    r3 = (r13 + -28280);
    ctx->lr = 0x801DBBA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80208B74u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-5));
}

loc_801DBBAC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DBBCC;
    }
}

loc_801DBBB0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DBBC0;
    }
}

loc_801DBBB4:
{
}

loc_801DBBB8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-15))) {
        goto loc_801DBBCC;
    }
}

loc_801DBBBC:
{
    goto loc_801DBBDC;
}

loc_801DBBC0:
{
}

loc_801DBBC4:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(-3))) {
        goto loc_801DBBDC;
    }
}

loc_801DBBC8:
{
    goto loc_801DBBD4;
}

loc_801DBBCC:
{
    r0 = -46;
    goto loc_801DBBF0;
}

loc_801DBBD4:
{
    r0 = -38;
    goto loc_801DBBF0;
}

loc_801DBBDC:
{
    r0 = -43;
    goto loc_801DBBF0;
}

loc_801DBBE4:
{
    r0 = -43;
    goto loc_801DBBF0;
}

loc_801DBBEC:
{
    r0 = 0;
}

loc_801DBBF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801DBBF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DBC4C;
    }
}

loc_801DBBF8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(5));
}

loc_801DBBFC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DBC44;
    }
}

loc_801DBC00:
{
    r3 = (r13 + -28280);
    ctx->lr = 0x801DBC08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80208B74u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-5));
}

loc_801DBC0C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DBC2C;
    }
}

loc_801DBC10:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DBC20;
    }
}

loc_801DBC14:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-15));
}

loc_801DBC18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DBC2C;
    }
}

loc_801DBC1C:
{
    goto loc_801DBC3C;
}

loc_801DBC20:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-3));
}

loc_801DBC24:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DBC3C;
    }
}

loc_801DBC28:
{
    goto loc_801DBC34;
}

loc_801DBC2C:
{
    r3 = -46;
    goto loc_801DBDE0;
}

loc_801DBC34:
{
    r3 = -38;
    goto loc_801DBDE0;
}

loc_801DBC3C:
{
    r3 = -43;
    goto loc_801DBDE0;
}

loc_801DBC44:
{
    r3 = -43;
    goto loc_801DBDE0;
}

loc_801DBC4C:
{
    r3 = (r13 + -28280);
    ctx->lr = 0x801DBC54u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80208C80u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801DBC58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DBCB0;
    }
}

loc_801DBC5C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(5));
}

loc_801DBC60:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DBCA8;
    }
}

loc_801DBC64:
{
    r3 = (r13 + -28280);
    ctx->lr = 0x801DBC6Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80208B74u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-5));
}

loc_801DBC70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DBC90;
    }
}

loc_801DBC74:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DBC84;
    }
}

loc_801DBC78:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-15));
}

loc_801DBC7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DBC90;
    }
}

loc_801DBC80:
{
    goto loc_801DBCA0;
}

loc_801DBC84:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-3));
}

loc_801DBC88:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DBCA0;
    }
}

loc_801DBC8C:
{
    goto loc_801DBC98;
}

loc_801DBC90:
{
    r3 = -46;
    goto loc_801DBDE0;
}

loc_801DBC98:
{
    r3 = -38;
    goto loc_801DBDE0;
}

loc_801DBCA0:
{
    r3 = -43;
    goto loc_801DBDE0;
}

loc_801DBCA8:
{
    r3 = -43;
    goto loc_801DBDE0;
}

loc_801DBCB0:
{
    r3 = (r13 + -28272);
    ctx->lr = 0x801DBCB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80208A60u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801DBCBC:
{
    r31 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DBD18;
    }
}

loc_801DBCC4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(5));
}

loc_801DBCC8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DBD10;
    }
}

loc_801DBCCC:
{
    r3 = (r13 + -28280);
    ctx->lr = 0x801DBCD4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80208B74u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-5));
}

loc_801DBCD8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DBCF8;
    }
}

loc_801DBCDC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DBCEC;
    }
}

loc_801DBCE0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-15));
}

loc_801DBCE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DBCF8;
    }
}

loc_801DBCE8:
{
    goto loc_801DBD08;
}

loc_801DBCEC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-3));
}

loc_801DBCF0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DBD08;
    }
}

loc_801DBCF4:
{
    goto loc_801DBD00;
}

loc_801DBCF8:
{
    r3 = -46;
    goto loc_801DBDE0;
}

loc_801DBD00:
{
    r3 = -38;
    goto loc_801DBDE0;
}

loc_801DBD08:
{
    r3 = -43;
    goto loc_801DBDE0;
}

loc_801DBD10:
{
    r3 = -43;
    goto loc_801DBDE0;
}

loc_801DBD18:
{
    r3 = (r13 + -28280);
    ctx->lr = 0x801DBD20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80208414u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801DBD24:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801DBD7C;
    }
}

loc_801DBD28:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(5));
}

loc_801DBD2C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DBD74;
    }
}

loc_801DBD30:
{
    r3 = (r13 + -28280);
    ctx->lr = 0x801DBD38u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80208B74u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-5));
}

loc_801DBD3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DBD5C;
    }
}

loc_801DBD40:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DBD50;
    }
}

loc_801DBD44:
{
}

loc_801DBD48:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-15))) {
        goto loc_801DBD5C;
    }
}

loc_801DBD4C:
{
    goto loc_801DBD6C;
}

loc_801DBD50:
{
}

loc_801DBD54:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(-3))) {
        goto loc_801DBD6C;
    }
}

loc_801DBD58:
{
    goto loc_801DBD64;
}

loc_801DBD5C:
{
    r0 = -46;
    goto loc_801DBD80;
}

loc_801DBD64:
{
    r0 = -38;
    goto loc_801DBD80;
}

loc_801DBD6C:
{
    r0 = -43;
    goto loc_801DBD80;
}

loc_801DBD74:
{
    r0 = -43;
    goto loc_801DBD80;
}

loc_801DBD7C:
{
    r0 = 0;
}

loc_801DBD80:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801DBD84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DBDDC;
    }
}

loc_801DBD88:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(5));
}

loc_801DBD8C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DBDD4;
    }
}

loc_801DBD90:
{
    r3 = (r13 + -28280);
    ctx->lr = 0x801DBD98u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80208B74u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-5));
}

loc_801DBD9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DBDBC;
    }
}

loc_801DBDA0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DBDB0;
    }
}

loc_801DBDA4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-15));
}

loc_801DBDA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DBDBC;
    }
}

loc_801DBDAC:
{
    goto loc_801DBDCC;
}

loc_801DBDB0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-3));
}

loc_801DBDB4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DBDCC;
    }
}

loc_801DBDB8:
{
    goto loc_801DBDC4;
}

loc_801DBDBC:
{
    r3 = -46;
    goto loc_801DBDE0;
}

loc_801DBDC4:
{
    r3 = -38;
    goto loc_801DBDE0;
}

loc_801DBDCC:
{
    r3 = -43;
    goto loc_801DBDE0;
}

loc_801DBDD4:
{
    r3 = -43;
    goto loc_801DBDE0;
}

loc_801DBDDC:
{
    r3 = 0;
}

loc_801DBDE0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801DBA44 func_801DBA44 preserves=true fpr_mask=0x00000000
