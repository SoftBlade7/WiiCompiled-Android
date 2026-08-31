#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80678E94(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80678E94;

loc_80678E94:
{
    MemoryInline::FlatWriteRam32((r1 + -608), r1);
    r1 = (r1 + -608);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 612), r0);
    MemoryInline::FlatWriteRam32((r1 + 604), r31);
    r31 = r4;
    r4 = 3;
    MemoryInline::FlatWriteRam32((r1 + 600), r30);
    r30 = r3;
    r3 = (r1 + 80);
    ctx->lr = 0x80678EBCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801E8E1Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80678EC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80678ED0;
    }
}

loc_80678EC4:
{
    MemoryInline::FlatWrite32(r30, r3);
    r3 = 4;
    goto loc_80678F34;
}

loc_80678ED0:
{
    r3 = (r1 + 16);
    r4 = 64;
    ctx->lr = 0x80678EDCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801EA468u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r1 + 16);
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8019E770u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-12));
}

loc_80678EEC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80678F08;
    }
}

loc_80678EF0:
{
    r4 = r31;
    r3 = (r1 + 80);
    ctx->lr = 0x80678EFCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801EA4E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80678F00:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80678F18;
    }
}

loc_80678F04:
{
    goto loc_80678F1C;
}

loc_80678F08:
{
}

loc_80678F0C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80678F18;
    }
}

loc_80678F10:
{
    r3 = -1;
    goto loc_80678F1C;
}

loc_80678F18:
{
    r3 = 0;
}

loc_80678F1C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80678F20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80678F30;
    }
}

loc_80678F24:
{
    MemoryInline::FlatWrite32(r30, r3);
    r3 = 4;
    goto loc_80678F34;
}

loc_80678F30:
{
    r3 = 0;
}

loc_80678F34:
{
    r0 = MemoryInline::FlatRead32((r1 + 612));
    r31 = MemoryInline::FlatRead32((r1 + 604));
    r30 = MemoryInline::FlatRead32((r1 + 600));
    ctx->lr = r0;
    r1 = (r1 + 608);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80678E94 func_80678E94 preserves=true fpr_mask=0x00000000
