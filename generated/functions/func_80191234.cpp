#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80191234(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80191234;

loc_80191234:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r7 = (r5 + -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(31));
    r5 = (r5_rot_0 & 2147483647);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = 0;
    r0 = MemoryInline::FlatRead32(r4);
    r6 = (r4 + r0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 104u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 4), r6);
    r6 = MemoryInline::FlatRead32((r4 + 4));
    r6 = (r4 + r6);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 8), r6);
    r6 = MemoryInline::FlatRead32((r4 + 8));
    r6 = (r4 + r6);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 12), r6);
    r6 = MemoryInline::FlatRead32((r4 + 12));
    r6 = (r4 + r6);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 16), r6);
    r6 = MemoryInline::FlatRead32((r4 + 16));
    r6 = (r4 + r6);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 20), r6);
    r6 = MemoryInline::FlatRead32((r4 + 20));
    r4 = (r4 + r6);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 28), r5);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 24), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 32), r7);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 36), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 100u, (r3 + 104), r30);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801914C0u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    ctr = ctx->ctr;
    r0 = (r31 + 252);
    MemoryInline::FlatWrite32((r31 + 1024), r30);
    r3 = r31;
    r5 = 0;
    MemoryInline::FlatWrite32((r31 + 1020), r0);
    r0 = 4;
    MemoryInline::FlatWrite32((r31 + 1028), r30);
}

loc_801912D4:
{
    r4 = r3;
    ctr = r0;
}

loc_801912DC:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r4 + 1032), 0, 128u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r4 + 1032), r30);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r4 + 1036), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r4 + 1040), r30);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r4 + 1044), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r4 + 1048), r30);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r4 + 1052), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r4 + 1056), r30);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r4 + 1060), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r4 + 1064), r30);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r4 + 1068), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r4 + 1072), r30);
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r4 + 1076), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r4 + 1080), r30);
        MemoryInline::WriteResolved32(guest_range_1, 52u, (r4 + 1084), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r4 + 1088), r30);
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r4 + 1092), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 64u, (r4 + 1096), r30);
        MemoryInline::WriteResolved32(guest_range_1, 68u, (r4 + 1100), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 72u, (r4 + 1104), r30);
        MemoryInline::WriteResolved32(guest_range_1, 76u, (r4 + 1108), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 80u, (r4 + 1112), r30);
        MemoryInline::WriteResolved32(guest_range_1, 84u, (r4 + 1116), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 88u, (r4 + 1120), r30);
        MemoryInline::WriteResolved32(guest_range_1, 92u, (r4 + 1124), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 96u, (r4 + 1128), r30);
        MemoryInline::WriteResolved32(guest_range_1, 100u, (r4 + 1132), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 104u, (r4 + 1136), r30);
        MemoryInline::WriteResolved32(guest_range_1, 108u, (r4 + 1140), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 112u, (r4 + 1144), r30);
        MemoryInline::WriteResolved32(guest_range_1, 116u, (r4 + 1148), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 120u, (r4 + 1152), r30);
        MemoryInline::WriteResolved32(guest_range_1, 124u, (r4 + 1156), r30);
    }
    r4 = (r4 + 128);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801912DC;
    }
}

loc_80191364:
{
    r5 = (r5 + 1);
    r3 = (r3 + 512);
}

loc_80191370:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(16))) {
        goto loc_801912D4;
    }
}

loc_80191374:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = 0x80340000u;
    r0 = MemoryInline::FlatRead32((r4 + 20696));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80191384:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80191390;
    }
}

loc_80191388:
{
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_80191398;
}

loc_80191390:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r31, r0);
}

loc_80191398:
{
    r4 = 0x80340000u;
    MemoryInline::FlatWriteRam32((r4 + 20696), r31);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000003B gpr_write=0xC00003FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80191234 func_80191234 preserves=true fpr_mask=0x00000000
