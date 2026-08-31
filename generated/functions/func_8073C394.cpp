#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8073C394(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r11_addr_0 = 0;
    uint32_t r11_addr_1 = 0;
    uint32_t r11_addr_2 = 0;
    uint32_t r11_addr_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
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
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8073C394;

loc_8073C394:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r7 = 0x808A0000u;
    r7 = (r7 + 10176);
    r11 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r0 = 0;
    f3.d = MemoryInline::FlatReadFloat32((r7 + 192));
    r10 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r12 = -1;
    f2.d = MemoryInline::FlatReadFloat32((r7 + 24));
    r31 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 40));
    r5 = 1;
    r8 = MemoryInline::FlatRead8((r4 + 10));
    f4.d = MemoryInline::FlatReadFloat32((r4 + 36));
    MemoryInline::FlatWriteRam32((r11 + 11248), r0);
    r11 = (r11 + 11248);
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + 4), 0, 44u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + 4), r0);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + 8), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + 12), r0);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + 16), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + 20), r0);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + 24), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + 28), r0);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + 32), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + 36), r0);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + 40), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + 44), r0);
    goto loc_8073C484;
}

loc_8073C408:
{
    r30 = MemoryInline::FlatRead32((r10 + 4));
    r9 = MemoryInline::FlatRead32((r30 + 20));
    r0 = MemoryInline::FlatRead8((r9 + 10));
}

loc_8073C418:
{
    if ((static_cast<uint32_t>(r8) != static_cast<uint32_t>(r0))) {
        goto loc_8073C47C;
    }
}

loc_8073C41C:
{
    f0.d = MemoryInline::FlatReadFloat32((r9 + 40));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f4.d));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r6 = fctiwzword0;
    r6 = (r6 + 6);
}

loc_8073C440:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(11))) {
        goto loc_8073C44C;
    }
}

loc_8073C444:
{
    r6 = 11;
    goto loc_8073C458;
}

loc_8073C44C:
{
}

loc_8073C450:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(0))) {
        goto loc_8073C458;
    }
}

loc_8073C454:
{
    r6 = 0;
}

loc_8073C458:
{
}

loc_8073C45C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r9))) {
        goto loc_8073C468;
    }
}

loc_8073C460:
{
    r12 = r6;
    goto loc_8073C47C;
}

loc_8073C468:
{
    r0 = MemoryInline::FlatRead8((r30 + 32));
}

loc_8073C470:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8073C47C;
    }
}

loc_8073C474:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r11_addr_2 = (r11 + r0);
    MemoryInline::FlatWrite32(r11_addr_2, r5);
}

loc_8073C47C:
{
    r10 = (r10 + 4);
    r31 = (r31 + 1);
}

loc_8073C484:
{
    r0 = MemoryInline::FlatRead32((r3 + 52));
}

loc_8073C48C:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(r0))) {
        goto loc_8073C408;
    }
}

loc_8073C490:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r12), static_cast<uint32_t>(11));
}

loc_8073C494:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8073C530;
    }
}

loc_8073C498:
{
    r3 = 0x809C0000u;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r3 + 11248);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8073C4AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073C530;
    }
}

loc_8073C4B0:
{
    r0 = 20;
    r4 = (r7 + 112);
    ctr = r0;
}

loc_8073C4BC:
{
    r0 = MemoryInline::FlatRead32(r4);
    r5 = (r12 + r0);
}

loc_8073C4C8:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(11))) {
        goto loc_8073C4D4;
    }
}

loc_8073C4CC:
{
    r5 = 11;
    goto loc_8073C4E0;
}

loc_8073C4D4:
{
}

loc_8073C4D8:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(0))) {
        goto loc_8073C4E0;
    }
}

loc_8073C4DC:
{
    r5 = 0;
}

loc_8073C4E0:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3_addr_3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8073C4EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8073C528;
    }
}

loc_8073C4F0:
{
    r3 = (r5 + -6);
    r0 = 1127219200;
    r3 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    f3.d = MemoryInline::FlatReadFloat64((r7 + 200));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f1.d = MemoryInline::FlatReadFloat32((r7 + 24));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r7 + 192));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f1.d = PpcFmulsInline(f4.d, f0.d);
    goto loc_8073C530;
}

loc_8073C528:
{
    r4 = (r4 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8073C4BC;
    }
}

loc_8073C530:
{
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r1 = (r1 + 32);
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC0001FFB gpr_write=0xC0001FFB gpr_return=0x00000018 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8073C394 func_8073C394 preserves=true fpr_mask=0x00000000
