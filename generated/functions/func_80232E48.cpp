#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80232E48(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80232E48;

loc_80232E48:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r3 = r4;
    ctx->lr = 0x80232E6Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801E7244u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r3 + 46);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(47));
}

loc_80232E74:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80232EEC;
    }
}

loc_80232E78:
{
    r4 = 0x802A0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = (r4 + 14464);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80232EC4u:
        goto loc_80232EC4;
        break;
    case 0x80232EECu:
        goto loc_80232EEC;
        break;
    case 0x80232ED8u:
        goto loc_80232ED8;
        break;
    case 0x80232EACu:
        goto loc_80232EAC;
        break;
    case 0x80232E90u:
        goto loc_80232E90;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_80232E90:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r0 = 0;
    r4 = 0;
    MemoryInline::FlatWrite32((r30 + 4), r0);
    MemoryInline::FlatWrite32((r30 + 8), r3);
    goto loc_80232EFC;
}

loc_80232EAC:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r4 = 0;
    MemoryInline::FlatWrite32((r30 + 4), r0);
    MemoryInline::FlatWrite32((r30 + 8), r3);
    goto loc_80232EFC;
}

loc_80232EC4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 4), r0);
    r4 = 2;
    MemoryInline::FlatWrite32((r30 + 8), r3);
    goto loc_80232EFC;
}

loc_80232ED8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 4), r0);
    r4 = 3;
    MemoryInline::FlatWrite32((r30 + 8), r3);
    goto loc_80232EFC;
}

loc_80232EEC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 4), r0);
    r4 = 4;
    MemoryInline::FlatWrite32((r30 + 8), r3);
}

loc_80232EFC:
{
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r3 = r4;
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80232E48 func_80232E48 preserves=true fpr_mask=0x00000000
