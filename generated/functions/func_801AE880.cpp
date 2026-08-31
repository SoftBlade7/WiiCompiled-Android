#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801AE880(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801AE880;

loc_801AE880:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0x80350000u;
    r7 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r6 = (r3 * 12);
    r5 = (r5 + -32336);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = (r5 + r6);
    r0 = MemoryInline::FlatRead32((r13 + -28908));
    r4 = (r0 & 1792);
    r0 = PPC_Srw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r3));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(1024));
}

loc_801AE8B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AE9A8;
    }
}

loc_801AE8B8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801AE8EC;
    }
}

loc_801AE8BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(512));
}

loc_801AE8C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AE978;
    }
}

loc_801AE8C4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801AE8E0;
    }
}

loc_801AE8C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(256));
}

loc_801AE8CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AE944;
    }
}

loc_801AE8D0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801AE9A8;
    }
}

loc_801AE8D4:
{
}

loc_801AE8D8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801AE910;
    }
}

loc_801AE8DC:
{
    goto loc_801AE9A8;
}

loc_801AE8E0:
{
}

loc_801AE8E4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(768))) {
        goto loc_801AE9A8;
    }
}

loc_801AE8E8:
{
    goto loc_801AE9A8;
}

loc_801AE8EC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(1536));
}

loc_801AE8F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AE910;
    }
}

loc_801AE8F4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801AE904;
    }
}

loc_801AE8F8:
{
}

loc_801AE8FC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1280))) {
        goto loc_801AE910;
    }
}

loc_801AE900:
{
    goto loc_801AE9A8;
}

loc_801AE904:
{
}

loc_801AE908:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1792))) {
        goto loc_801AE910;
    }
}

loc_801AE90C:
{
    goto loc_801AE9A8;
}

loc_801AE910:
{
    r4 = MemoryInline::FlatRead8((r31 + 6));
    r4 = (r4 & 240);
    MemoryInline::FlatWrite8((r31 + 6), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r31 + 7));
    r4 = (r4 & 240);
    MemoryInline::FlatWrite8((r31 + 7), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r31 + 8));
    r4 = (r4 & 240);
    MemoryInline::FlatWrite8((r31 + 8), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r31 + 9));
    r4 = (r4 & 240);
    MemoryInline::FlatWrite8((r31 + 9), static_cast<uint8_t>(r4));
    goto loc_801AE9A8;
}

loc_801AE944:
{
    r4 = MemoryInline::FlatRead8((r31 + 4));
    r4 = (r4 & -16);
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r31 + 5));
    r4 = (r4 & -16);
    MemoryInline::FlatWrite8((r31 + 5), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r31 + 8));
    r4 = (r4 & 240);
    MemoryInline::FlatWrite8((r31 + 8), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r31 + 9));
    r4 = (r4 & 240);
    MemoryInline::FlatWrite8((r31 + 9), static_cast<uint8_t>(r4));
    goto loc_801AE9A8;
}

loc_801AE978:
{
    r4 = MemoryInline::FlatRead8((r31 + 4));
    r4 = (r4 & -16);
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r31 + 5));
    r4 = (r4 & -16);
    MemoryInline::FlatWrite8((r31 + 5), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r31 + 6));
    r4 = (r4 & 240);
    MemoryInline::FlatWrite8((r31 + 6), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r31 + 7));
    r4 = (r4 & 240);
    MemoryInline::FlatWrite8((r31 + 7), static_cast<uint8_t>(r4));
}

loc_801AE9A8:
{
    r5 = MemoryInline::FlatRead8((r31 + 2));
    r4 = MemoryInline::FlatRead32((r13 + -28912));
    r5 = (r5 + -128);
    MemoryInline::FlatWrite8((r31 + 2), static_cast<uint8_t>(r5));
    r0 = (r4 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    r4 = MemoryInline::FlatRead8((r31 + 3));
    r0 = (r4 + -128);
    MemoryInline::FlatWrite8((r31 + 3), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead8((r31 + 4));
    r0 = (r4 + -128);
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead8((r31 + 5));
    r0 = (r4 + -128);
    MemoryInline::FlatWrite8((r31 + 5), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AEA10;
    }
}

loc_801AE9E4:
{
    r0 = MemoryInline::FlatRead8((r31 + 2));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(64));
}

loc_801AE9F0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801AEA10;
    }
}

loc_801AE9F4:
{
    ctx->lr = 0x801AE9F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B3808u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r3 & -65536);
    r0 = (r3 + -150994944);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(0));
}

loc_801AEA04:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801AEA10;
    }
}

loc_801AEA08:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 2), static_cast<uint8_t>(r0));
}

loc_801AEA10:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFE027FB gpr_write=0xFFE00FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801AE880 func_801AE880 preserves=true fpr_mask=0x00000000
