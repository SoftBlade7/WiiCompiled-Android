#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8055D554(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r27_rot_1 = 0;
    uint32_t r27_rot_2 = 0;
    uint32_t r27_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8055D554;

loc_8055D554:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r26);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 12), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r30);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r31);
    }
    r29 = r3;
    r30 = r4;
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r6 & 2097152);
}

loc_8055D578:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8055D588;
    }
}

loc_8055D57C:
{
    r0 = (r6 & 67108864);
}

loc_8055D580:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8055D588;
    }
}

loc_8055D584:
{
    r5 = 1;
}

loc_8055D588:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8055D58C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8055D69C;
    }
}

loc_8055D590:
{
    r7 = MemoryInline::FlatRead16((r3 + 8));
    r0 = (r7 & 32768);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8055D598:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8055D69C;
    }
}

loc_8055D59C:
{
    r0 = MemoryInline::FlatRead32((r3 + 68));
    r31 = 0;
    r5 = (r0 + r4);
    r0 = MemoryInline::FlatRead8((r5 + 32));
    r0 = (r0 & 1);
}

loc_8055D5B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8055D5B8;
    }
}

loc_8055D5B4:
{
    r31 = 1;
}

loc_8055D5B8:
{
    r0 = (r6 & 800);
}

loc_8055D5BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8055D5E0;
    }
}

loc_8055D5C0:
{
    r3 = MemoryInline::FlatRead32((r3 + 72));
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r3 = MemoryInline::FlatRead16((r3 + 4));
    r0 = (r0 & 65535);
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8055D5E0;
    }
}

loc_8055D5DC:
{
    r31 = 1;
}

loc_8055D5E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8055D5E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8055D5F4;
    }
}

loc_8055D5E8:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(18));
    r0 = (r0_rot_1 & 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
}

loc_8055D5F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8055D65C;
    }
}

loc_8055D5F4:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r31));
    r28 = r29;
    r27_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r27 = (r27_rot_1 & 134217727);
    r26 = 0;
}

loc_8055D604:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r4 = MemoryInline::FlatRead32((r28 + 20));
    r5 = r27;
    r12 = MemoryInline::FlatRead32((r12 + 32));
    r6 = 1;
    r4 = MemoryInline::FlatRead32(r4);
    ctr = r12;
    ctx->lr = 0x8055D628u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r26 = (r26 + 1);
    r28 = (r28 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(2));
}

loc_8055D634:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8055D604;
    }
}

loc_8055D638:
{
}

loc_8055D63C:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8055D650;
    }
}

loc_8055D640:
{
    r0 = MemoryInline::FlatRead16((r29 + 8));
    r0 = (r0 | 16384);
    MemoryInline::FlatWrite16((r29 + 8), static_cast<uint16_t>(r0));
    goto loc_8055D65C;
}

loc_8055D650:
{
    r0 = MemoryInline::FlatRead16((r29 + 8));
    r0 = (r0 & -16385);
    MemoryInline::FlatWrite16((r29 + 8), static_cast<uint16_t>(r0));
}

loc_8055D65C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8055D660:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8055D680;
    }
}

loc_8055D664:
{
    r0 = 1;
    r3 = MemoryInline::FlatRead16((r29 + 8));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r30));
    r0 = (r0 & 65535);
    r0 = (r3 | r0);
    MemoryInline::FlatWrite16((r29 + 8), static_cast<uint16_t>(r0));
    goto loc_8055D6A8;
}

loc_8055D680:
{
    r0 = 1;
    r3 = MemoryInline::FlatRead16((r29 + 8));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r30));
    r0 = (r0 & 65535);
    r0 = (r3 & ~r0);
    MemoryInline::FlatWrite16((r29 + 8), static_cast<uint16_t>(r0));
    goto loc_8055D6A8;
}

loc_8055D69C:
{
    r0 = MemoryInline::FlatRead16((r3 + 8));
    r0 = (r0 | 16384);
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r0));
}

loc_8055D6A8:
{
    r26 = MemoryInline::FlatRead32((r1 + 8));
    r27 = MemoryInline::FlatRead32((r1 + 12));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8055D554 func_8055D554 preserves=true fpr_mask=0x00000000
