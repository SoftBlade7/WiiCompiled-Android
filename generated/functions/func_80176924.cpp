#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80176924(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80176924;

loc_80176924:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(23));
}

loc_80176930:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017695C;
    }
}

loc_80176940:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80176950;
    }
}

loc_80176944:
{
}

loc_80176948:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(4))) {
        goto loc_8017695C;
    }
}

loc_8017694C:
{
    goto loc_80176974;
}

loc_80176950:
{
}

loc_80176954:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(25))) {
        goto loc_8017695C;
    }
}

loc_80176958:
{
    goto loc_80176974;
}

loc_8017695C:
{
    r4 = 0x80340000u;
    r0 = 3;
    r4 = MemoryInline::FlatRead32((r4 + 18744));
    r5 = (r4 + 65536);
    r5 = (r5 + -18256);
    goto loc_80176980;
}

loc_80176974:
{
    r4 = 0x80340000u;
    r0 = 4;
    r5 = MemoryInline::FlatRead32((r4 + 18744));
}

loc_80176980:
{
    r4 = r5;
    r31 = 0;
    r6 = 0;
    ctr = r0;
}

loc_80176994:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_801769C4;
    }
}

loc_80176998:
{
    r0 = MemoryInline::FlatRead8((r4 + 11804));
}

loc_801769A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801769B8;
    }
}

loc_801769A4:
{
    r4 = (r6 * 11820);
    r0 = 1;
    r31 = (r5 + r4);
    MemoryInline::FlatWrite8((r31 + 11804), static_cast<uint8_t>(r0));
    goto loc_801769C4;
}

loc_801769B8:
{
    r4 = (r4 + 11820);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80176998;
    }
}

loc_801769C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_801769C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80176AC4;
    }
}

loc_801769CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(23));
}

loc_801769D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801769F0;
    }
}

loc_801769D4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801769E4;
    }
}

loc_801769D8:
{
}

loc_801769DC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(4))) {
        goto loc_801769F0;
    }
}

loc_801769E0:
{
    goto loc_80176A04;
}

loc_801769E4:
{
}

loc_801769E8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(25))) {
        goto loc_801769F0;
    }
}

loc_801769EC:
{
    goto loc_80176A04;
}

loc_801769F0:
{
    r3 = 0x80340000u;
    r4 = MemoryInline::FlatRead32((r3 + 18744));
    r3 = (r4 + 65536);
    r3 = (r3 + 17212);
    goto loc_80176A14;
}

loc_80176A04:
{
    r3 = 0x80340000u;
    r4 = MemoryInline::FlatRead32((r3 + 18744));
    r3 = (r4 + 65536);
    r3 = (r3 + 17204);
}

loc_80176A14:
{
    r31 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r31 + 11816));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(23));
}

loc_80176A20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80176A40;
    }
}

loc_80176A24:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80176A34;
    }
}

loc_80176A28:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_80176A2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80176A40;
    }
}

loc_80176A30:
{
    goto loc_80176A4C;
}

loc_80176A34:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(25));
}

loc_80176A38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80176A40;
    }
}

loc_80176A3C:
{
    goto loc_80176A4C;
}

loc_80176A40:
{
    r30 = (r4 + 65536);
    r30 = (r30 + 17212);
    goto loc_80176A54;
}

loc_80176A4C:
{
    r30 = (r4 + 65536);
    r30 = (r30 + 17204);
}

loc_80176A54:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x80176A60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80192E34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = r31;
    ctx->lr = 0x80176A68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80192D9Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 11804), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r31 + 11812));
}

loc_80176A78:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80176A88;
    }
}

loc_80176A7C:
{
    r0 = MemoryInline::FlatRead32((r31 + 11808));
    MemoryInline::FlatWrite32(r30, r0);
    goto loc_80176A90;
}

loc_80176A88:
{
    r0 = MemoryInline::FlatRead32((r31 + 11808));
    MemoryInline::FlatWrite32((r3 + 11808), r0);
}

loc_80176A90:
{
    r3 = MemoryInline::FlatRead32((r31 + 11808));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80176A98:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80176AA8;
    }
}

loc_80176A9C:
{
    r0 = MemoryInline::FlatRead32((r31 + 11812));
    MemoryInline::FlatWrite32((r30 + 4), r0);
    goto loc_80176AB0;
}

loc_80176AA8:
{
    r0 = MemoryInline::FlatRead32((r31 + 11812));
    MemoryInline::FlatWrite32((r3 + 11812), r0);
}

loc_80176AB0:
{
    r3 = 0;
    r0 = 1;
    MemoryInline::FlatWrite32((r31 + 11808), r3);
    MemoryInline::FlatWrite32((r31 + 11812), r3);
    MemoryInline::FlatWrite8((r31 + 11804), static_cast<uint8_t>(r0));
}

loc_80176AC4:
{
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFE0003FB gpr_write=0xFE000BFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80176924 func_80176924 preserves=true fpr_mask=0x00000000
