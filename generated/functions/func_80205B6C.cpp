#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80205B6C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80205B6C;

loc_80205B6C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = (r3 & -196609);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80205B7C:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80205BA0;
    }
}

loc_80205B88:
{
    r4 = 0x80360000u;
    r0 = 10;
    r4 = (r4 + -20912);
    r3 = 10;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    goto loc_80205CE0;
}

loc_80205BA0:
{
    r5 = (r3 & 196608);
    r0 = (r5 + -196608);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(0));
}

loc_80205BAC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80205BC8;
    }
}

loc_80205BB0:
{
    r4 = 0x80360000u;
    r0 = 10;
    r4 = (r4 + -20912);
    r3 = 10;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    goto loc_80205CE0;
}

loc_80205BC8:
{
    r5 = (r3 & 65536);
}

loc_80205BCC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80205BE8;
    }
}

loc_80205BD0:
{
    r3 = 0x80360000u;
    r3 = (r3 + -20912);
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 | 65536);
    MemoryInline::FlatWriteRam32((r3 + 20), r0);
    goto loc_80205BFC;
}

loc_80205BE8:
{
    r3 = 0x80360000u;
    r3 = (r3 + -20912);
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 & -65537);
    MemoryInline::FlatWriteRam32((r3 + 20), r0);
}

loc_80205BFC:
{
    r7 = 0x80360000u;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80205C04:
{
    r3 = MemoryInline::FlatRead32((r7 + -20912));
    r6 = (r7 + -20912);
    r0 = 0;
    r5 = (r6 + 72);
    r3 = (r3 | 1);
    MemoryInline::FlatWriteRam32((r6 + 8), r5);
    MemoryInline::FlatWriteRam32((r7 + -20912), r3);
    MemoryInline::FlatWriteRam32((r6 + 12), r0);
    MemoryInline::FlatWriteRam32((r6 + 16), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80205C3C;
    }
}

loc_80205C2C:
{
    r0 = MemoryInline::FlatRead32((r6 + 20));
    r0 = (r0 | 65536);
    MemoryInline::FlatWriteRam32((r6 + 20), r0);
    goto loc_80205C48;
}

loc_80205C3C:
{
    r0 = MemoryInline::FlatRead32((r6 + 20));
    r0 = (r0 & -65537);
    MemoryInline::FlatWriteRam32((r6 + 20), r0);
}

loc_80205C48:
{
    r11 = 0x80360000u;
    r9 = 0x80200000u;
    r11 = (r11 + -20912);
    r10 = 0;
    r8 = 0x80200000u;
    r7 = 0x80200000u;
    r6 = 0x80200000u;
    r5 = 0x80200000u;
    r3 = 0x80200000u;
    r9 = (r9 + 29332);
    r8 = (r8 + 29776);
    r7 = (r7 + 30392);
    r6 = (r6 + 30444);
    r5 = (r5 + 30568);
    r3 = (r3 + 30576);
    r0 = 1;
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + 24), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + 24), r4);
    r31 = (r11 + 72);
    r30 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + 28), r10);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + 32), r10);
    }
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + 60), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + 36), r9);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + 40), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + 44), r7);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + 48), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + 52), r5);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + 56), r3);
    }
}

loc_80205CB8:
{
    r3 = r31;
    r4 = 0;
    r5 = 6272;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    InvokeDirectCpu<0x801EF500u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    r30 = (r30 + 1);
    r31 = (r31 + 6272);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(26));
}

loc_80205CD4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80205CB8;
    }
}

loc_80205CD8:
{
    // inline leaf 0x80207CE4 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -24240), r0);
    // end of inlined leaf 0x80207CE4
    r3 = 0;
}

loc_80205CE0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC0002FFB gpr_write=0xC0000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80205B6C func_80205B6C preserves=true fpr_mask=0x00000000
