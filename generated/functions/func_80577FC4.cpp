#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80577FC4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_805780B4_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80577FC4;

loc_80577FC4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = 0x80890000u;
    r29 = (r29 + 6656);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    ctx->lr = 0x80577FF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8059018Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32((r29 + 4));
    r3 = 0x808B0000u;
    r30 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r29 + 12));
    r4 = 0x808B0000u;
    r3 = (r3 + 24416);
    r4 = (r4 + 24536);
    r28 = (r31 + 304);
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 12), 0, 288u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r31 + 12), r3);
    r3 = r28;
    MemoryInline::WriteResolved32(guest_range_0, 252u, (r31 + 264), r4);
    MemoryInline::WriteResolved16(guest_range_0, 268u, (r31 + 280), static_cast<uint16_t>(r30));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 256u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_0, 256u, (r31 + 268), r30);
        MemoryInline::WriteResolved16(guest_range_0, 258u, (r31 + 270), r30);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 260u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_0, 260u, (r31 + 272), r30);
        MemoryInline::WriteResolved16(guest_range_0, 262u, (r31 + 274), r30);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 264u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_0, 264u, (r31 + 276), r30);
        MemoryInline::WriteResolved16(guest_range_0, 266u, (r31 + 278), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 272u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 272u, (r31 + 284), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 276u, (r31 + 288), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 284u, (r31 + 296), f0.d);
    ctx->lr = 0x80578048u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8059018Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    r3 = 0x808B0000u;
    f1.d = MemoryInline::FlatReadFloat32(r29);
    r3 = (r3 + 24524);
    r29 = (r31 + 612);
    MemoryInline::FlatWrite32((r28 + 12), r3);
    r3 = r29;
    MemoryInline::FlatWriteFloat32((r28 + 16), f1.d);
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 356), 0, 242u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r31 + 356), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r31 + 360), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r31 + 364), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r31 + 368), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r31 + 372), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r31 + 376), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r31 + 388), f0.d);
    MemoryInline::WriteResolved32(guest_range_1, 236u, (r31 + 592), r30);
    MemoryInline::WriteResolved16(guest_range_1, 240u, (r31 + 596), static_cast<uint16_t>(r30));
    ctx->lr = 0x80578090u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8059018Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r4 = 0x808B0000u;
    r3 = 0x808B0000u;
    r4 = (r4 + 24548);
    MemoryInline::FlatWrite32((r29 + 12), r4);
    r5 = 0x809C0000u;
    r3 = (r3 + 23764);
    r4 = MemoryInline::FlatRead32((r5 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2924));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    addr_lfsx_805780B4_loc_0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_805780B4_loc_0);
    MemoryInline::FlatWriteFloat32((r31 + 16), f0.d);
    r3 = MemoryInline::FlatRead32((r5 + -10456));
    r3 = MemoryInline::FlatRead32((r3 + 2928));
    r0 = (r3 + -3);
}

loc_805780CC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(7))) {
        goto loc_805780E4;
    }
}

loc_805780D0:
{
    r3 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r0 & 193);
}

loc_805780DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805780E4;
    }
}

loc_805780E0:
{
    r30 = r3;
}

loc_805780E4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_805780E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805780F8;
    }
}

loc_805780EC:
{
    r3 = 0x808B0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 23776));
    MemoryInline::FlatWriteFloat32((r31 + 16), f0.d);
}

loc_805780F8:
{
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF000000B gpr_write=0xF000007B gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80577FC4 func_80577FC4 preserves=true fpr_mask=0x00000000
