#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801DAFBC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801DAFBC;

loc_801DAFBC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(9));
}

loc_801DAFE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DAFEC;
    }
}

loc_801DAFE4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(265));
}

loc_801DAFE8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DB000;
    }
}

loc_801DAFEC:
{
    r3 = r30;
    ctx->lr = 0x801DAFF4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DBF90u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 0;
    r31 = r3;
    MemoryInline::FlatWrite32((r13 + -24404), r0);
}

loc_801DB000:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r0 = (r0 & 256);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801DB008:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DB078;
    }
}

loc_801DB00C:
{
    r3 = MemoryInline::FlatRead32((r30 + 152));
    ctx->lr = 0x801DB014u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80208770u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801DB018:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801DB070;
    }
}

loc_801DB01C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(5));
}

loc_801DB020:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DB068;
    }
}

loc_801DB024:
{
    r3 = (r13 + -28280);
    ctx->lr = 0x801DB02Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80208B74u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-5));
}

loc_801DB030:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DB050;
    }
}

loc_801DB034:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DB044;
    }
}

loc_801DB038:
{
}

loc_801DB03C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-15))) {
        goto loc_801DB050;
    }
}

loc_801DB040:
{
    goto loc_801DB060;
}

loc_801DB044:
{
}

loc_801DB048:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(-3))) {
        goto loc_801DB060;
    }
}

loc_801DB04C:
{
    goto loc_801DB058;
}

loc_801DB050:
{
    r3 = -46;
    goto loc_801DB080;
}

loc_801DB058:
{
    r3 = -38;
    goto loc_801DB080;
}

loc_801DB060:
{
    r3 = -17;
    goto loc_801DB080;
}

loc_801DB068:
{
    r3 = -17;
    goto loc_801DB080;
}

loc_801DB070:
{
    r3 = 0;
    goto loc_801DB080;
}

loc_801DB078:
{
    r3 = r30;
    ctx->lr = 0x801DB080u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DB0A4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801DB080:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_801DB084:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DB08C;
    }
}

loc_801DB088:
{
    r3 = r31;
}

loc_801DB08C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801DAFBC func_801DAFBC preserves=true fpr_mask=0x00000000
