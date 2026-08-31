#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80551054(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80551054;

loc_80551054:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r5 = (r4 + -5376);
    MemoryInline::FlatWriteRam32((r1 + 12), r27);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + 68), 0, 112u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 92u, (r5 + 160));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80551074:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8055127C;
    }
}

loc_80551078:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 96u, (r5 + 164));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80551080:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8055127C;
    }
}

loc_80551084:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 108u, (r5 + 176));
}

loc_8055108C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805510A0;
    }
}

loc_80551090:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r5 + 88));
    MemoryInline::FlatWriteRam32((r5 + 180), r3);
    r31 = (r3 + r0);
    goto loc_80551168;
}

loc_805510A0:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r5 + 256), 0, 112u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r5 + 256), r3);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + 68));
    r0 = (r4 + 31);
    r0 = (r0 & -32);
    r31 = (r3 + r0);
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r5 + 268), r31);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + 68));
    r0 = (r3 + 31);
    r0 = (r0 & -32);
    r31 = (r31 + r0);
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r5 + 280), r31);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + 68));
    r0 = (r3 + 31);
    r0 = (r0 & -32);
    r31 = (r31 + r0);
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r5 + 292), r31);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + 68));
    r0 = (r3 + 31);
    r0 = (r0 & -32);
    r31 = (r31 + r0);
    MemoryInline::WriteResolved32(guest_range_1, 48u, (r5 + 304), r31);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + 68));
    r0 = (r3 + 31);
    r0 = (r0 & -32);
    r31 = (r31 + r0);
    MemoryInline::WriteResolved32(guest_range_1, 60u, (r5 + 316), r31);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + 68));
    r0 = (r4 + 31);
    r0 = (r0 & -32);
    r31 = (r31 + r0);
    MemoryInline::WriteResolved32(guest_range_1, 72u, (r5 + 328), r31);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + 68));
    r0 = (r3 + 31);
    r0 = (r0 & -32);
    r31 = (r31 + r0);
    MemoryInline::WriteResolved32(guest_range_1, 84u, (r5 + 340), r31);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + 68));
    r0 = (r3 + 31);
    r0 = (r0 & -32);
    r31 = (r31 + r0);
    MemoryInline::WriteResolved32(guest_range_1, 96u, (r5 + 352), r31);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + 68));
    r0 = (r3 + 31);
    r0 = (r0 & -32);
    r31 = (r31 + r0);
    MemoryInline::WriteResolved32(guest_range_1, 108u, (r5 + 364), r31);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + 68));
    r0 = (r3 + 31);
    r0 = (r0 & -32);
    r31 = (r31 + r0);
}

loc_80551168:
{
    r30 = 0x809C0000u;
    r29 = 0;
    r30 = (r30 + -5376);
    r3 = MemoryInline::FlatRead32((r30 + 128));
    r0 = MemoryInline::FlatRead32((r30 + 132));
    r4 = (r3 * r0);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(30));
    r3 = (r3_rot_0 & 1073741823);
    r4 = (r4 + 31);
    r0 = (r3 + 31);
    r28 = (r4 & -32);
    r27 = (r0 & -32);
}

loc_80551194:
{
    MemoryInline::FlatWrite32((r30 + 376), r31);
    r3 = r31;
    r4 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A1600u>(ctx);
    r31 = (r31 + r28);
    MemoryInline::FlatWrite32((r30 + 380), r31);
    r3 = r31;
    r4 = r27;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A1600u>(ctx);
    r31 = (r31 + r27);
    MemoryInline::FlatWrite32((r30 + 384), r31);
    r3 = r31;
    r4 = r27;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A1600u>(ctx);
    r29 = (r29 + 1);
    r31 = (r31 + r27);
}

loc_805511D8:
{
    r30 = (r30 + 16);
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(3))) {
        goto loc_80551194;
    }
}

loc_805511E0:
{
    r5 = 0x809C0000u;
    r5 = (r5 + -5376);
    r0 = MemoryInline::FlatRead8((r5 + 167));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805511F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80551268;
    }
}

loc_805511F4:
{
    r0 = MemoryInline::FlatRead32((r5 + 72));
    r4 = 0;
    guest_range_2 = MemoryInline::ResolveRangeHost((r5 + 424), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r5 + 424), r31);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & -4);
    r0 = (r3 + 31);
    MemoryInline::WriteResolved32(guest_range_2, 4u, (r5 + 428), r31);
    r0 = (r0 & -32);
    r31 = (r31 + r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r5 + 436), r31);
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r5 + 440), r31);
    }
    r31 = (r31 + r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r5 + 448), r31);
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r5 + 452), r31);
    }
    r31 = (r31 + r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_2, 36u, (r5 + 460), r31);
        MemoryInline::WriteResolved32(guest_range_2, 40u, (r5 + 464), r31);
    }
    r31 = (r31 + r0);
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r5 + 432), r4);
    MemoryInline::WriteResolved32(guest_range_2, 20u, (r5 + 444), r4);
    MemoryInline::WriteResolved32(guest_range_2, 32u, (r5 + 456), r4);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_2, 44u, (r5 + 468), r4);
        MemoryInline::WriteResolved32(guest_range_2, 48u, (r5 + 472), r31);
    }
    MemoryInline::WriteResolved32(guest_range_2, 52u, (r5 + 476), r31);
    r31 = (r31 + r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_2, 56u, (r5 + 480), r4);
        MemoryInline::WriteResolved32(guest_range_2, 60u, (r5 + 484), r31);
    }
    MemoryInline::WriteResolved32(guest_range_2, 64u, (r5 + 488), r31);
    r31 = (r31 + r0);
    MemoryInline::WriteResolved32(guest_range_2, 68u, (r5 + 492), r4);
}

loc_80551268:
{
    r4 = 0x809C0000u;
    r3 = 1;
    r4 = (r4 + -5376);
    MemoryInline::FlatWriteRam32((r4 + 156), r31);
    goto loc_80551280;
}

loc_8055127C:
{
    r3 = 0;
}

loc_80551280:
{
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF800003B gpr_write=0xF800003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80551054 func_80551054 preserves=true fpr_mask=0x00000000
