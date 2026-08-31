#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8055B298(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
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
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8055B298;

loc_8055B298:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r8 = 0x808B0000u;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8055B2A8:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r7 = 0;
    r0 = (r6 | 77594624);
    r8 = (r8 + 18416);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 76u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r8);
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r3 + 8), static_cast<uint16_t>(r7));
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r7);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 36), r4);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 40), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r3 + 60), r7);
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r3 + 64), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r3 + 68), r5);
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r3 + 72), r7);
    }
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r7);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r7);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r7);
    }
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 32), r7);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8055B4F4;
    }
}

loc_8055B2FC:
{
    r0 = (r0 & 800);
}

loc_8055B300:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8055B4C0;
    }
}

loc_8055B304:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_8055B308:
{
    r3 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8055B31C;
    }
}

loc_8055B310:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(1));
}

loc_8055B314:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8055B328;
    }
}

loc_8055B318:
{
    goto loc_8055B334;
}

loc_8055B31C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 6224));
    goto loc_8055B334;
}

loc_8055B328:
{
    r3 = 0x809C0000u;
    r3 = (r3 + 6224);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8055B334:
{
    r4 = MemoryInline::FlatRead32((r3 + 16));
    r3 = 8;
    r5 = 4;
    ctx->lr = 0x8055B344u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DE0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8055B348:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8055B4BC;
    }
}

loc_8055B34C:
{
    r4 = 0x808B0000u;
    r5 = 65536;
    r4 = MemoryInline::FlatRead32((r4 + 19440));
    r0 = (r5 + -1);
    r5 = 0;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8055B364:
{
    MemoryInline::FlatWriteRam16((r3 + 4), static_cast<uint16_t>(r0));
    if (((cr & 0x04000000u) == 0)) {
        goto loc_8055B4B0;
    }
}

loc_8055B36C:
{
}

loc_8055B370:
{
    r7 = (r4 + -8);
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(8))) {
        goto loc_8055B47C;
    }
}

loc_8055B378:
{
    r8 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_8055B394;
    }
}

loc_8055B380:
{
    r6 = 0x80000000u;
    r0 = (r6 + -2);
}

loc_8055B38C:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r0))) {
        goto loc_8055B394;
    }
}

loc_8055B390:
{
    r8 = 1;
}

loc_8055B394:
{
}

loc_8055B398:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_8055B47C;
    }
}

loc_8055B39C:
{
    r6 = (r7 + 7);
    r0 = 1;
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(29));
    r6 = (r6_rot_1 & 536870911);
    ctr = r6;
}

loc_8055B3B0:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(0))) {
        goto loc_8055B47C;
    }
}

loc_8055B3B4:
{
    r7 = (r5 & 255);
    r6 = (r5 + 1);
    r8 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r7));
    r7 = MemoryInline::FlatRead16((r3 + 4));
    r6 = (r6 & 255);
    r9 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    r8 = (r8 & 65535);
    r8 = (r7 & ~r8);
    r6 = (r5 + 3);
    r7 = (r5 + 2);
    r9 = (r9 & 65535);
    r6 = (r6 & 255);
    r8 = (r8 & 65535);
    r10 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    r7 = (r7 & 255);
    r11 = (r8 & ~r9);
    r6 = (r5 + 4);
    r8 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r7));
    r7 = (r6 & 255);
    r6 = (r5 + 5);
    r9 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r7));
    r12 = (r8 & 65535);
    r8 = (r6 & 255);
    r7 = (r11 & 65535);
    r11 = (r7 & ~r12);
    r12 = (r10 & 65535);
    r10 = (r11 & 65535);
    r7 = (r5 + 6);
    r6 = (r5 + 7);
    r8 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r8));
    r7 = (r7 & 255);
    r10 = (r10 & ~r12);
    r11 = (r9 & 65535);
    r6 = (r6 & 255);
    r9 = (r10 & 65535);
    r10 = (r8 & 65535);
    r6 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    r7 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r7));
    r8 = (r9 & ~r11);
    r5 = (r5 + 8);
    r9 = (r7 & 65535);
    r6 = (r6 & 65535);
    r7 = (r8 & 65535);
    r7 = (r7 & ~r10);
    r7 = (r7 & 65535);
    r7 = (r7 & ~r9);
    r7 = (r7 & 65535);
    r6 = (r7 & ~r6);
    MemoryInline::FlatWriteRam16((r3 + 4), static_cast<uint16_t>(r6));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8055B3B4;
    }
}

loc_8055B47C:
{
    r0 = (r4 - r5);
    r6 = 1;
    ctr = r0;
}

loc_8055B48C:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r4))) {
        goto loc_8055B4B0;
    }
}

loc_8055B490:
{
    r0 = (r5 & 255);
    r4 = MemoryInline::FlatRead16((r3 + 4));
    r0 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
    r5 = (r5 + 1);
    r0 = (r0 & 65535);
    r0 = (r4 & ~r0);
    MemoryInline::FlatWriteRam16((r3 + 4), static_cast<uint16_t>(r0));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8055B490;
    }
}

loc_8055B4B0:
{
    r4 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 5040));
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
}

loc_8055B4BC:
{
    MemoryInline::FlatWrite32((r31 + 72), r3);
}

loc_8055B4C0:
{
    r4 = MemoryInline::FlatRead32((r31 + 68));
    r3 = 1077936128;
    r0 = (r3 + 16448);
    r3 = MemoryInline::FlatRead32((r4 + 32));
    r0 = (r3 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8055B4E8;
    }
}

loc_8055B4D8:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r0 = (r0 | 33554432);
    MemoryInline::FlatWrite32((r31 + 4), r0);
    goto loc_8055B4F4;
}

loc_8055B4E8:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r0 = (r0 & -33554433);
    MemoryInline::FlatWrite32((r31 + 4), r0);
}

loc_8055B4F4:
{
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
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
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8055B298 func_8055B298 preserves=true fpr_mask=0x00000000
