#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801943C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r27_rot_1 = 0;
    uint32_t r27_rot_2 = 0;
    uint32_t r28_addr_0 = 0;
    uint32_t r28_addr_1 = 0;
    uint32_t r28_addr_2 = 0;
    uint32_t r28_addr_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801943C0;

loc_801943C0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801943D8:
{
    r29 = r3;
    r30 = r7;
    r31 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801943F0;
    }
}

loc_801943E8:
{
    r31 = -4;
    goto loc_801944E0;
}

loc_801943F0:
{
    MemoryInline::FlatWrite32((r3 + 12), r4);
    r27_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r27 = (r27_rot_1 & -8);
    r26 = 0;
    r28 = 0;
    MemoryInline::FlatWrite32((r3 + 16), r5);
    MemoryInline::FlatWrite32((r3 + 20), r6);
    MemoryInline::FlatWrite32((r3 + 24), r7);
    goto loc_80194454;
}

loc_80194410:
{
    r3 = MemoryInline::FlatRead32((r29 + 24));
    r0 = (r28 + r27);
    r4 = (r3 + r0);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A162Cu>(ctx);
    r4 = MemoryInline::FlatRead32((r29 + 24));
    r3 = (r28 + r27);
    r4_addr_2 = (r4 + r3);
    r5 = MemoryInline::FlatRead32(r4_addr_2);
}

loc_80194438:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80194444;
    }
}

loc_8019443C:
{
    r0 = (r5 + -2147483648);
    goto loc_80194448;
}

loc_80194444:
{
    r0 = 0;
}

loc_80194448:
{
    r4_addr_3 = (r4 + r3);
    MemoryInline::FlatWrite32(r4_addr_3, r0);
    r28 = (r28 + 8);
    r26 = (r26 + 1);
}

loc_80194454:
{
    r0 = MemoryInline::FlatRead32((r29 + 20));
}

loc_8019445C:
{
    if ((static_cast<uint32_t>(r26) < static_cast<uint32_t>(r0))) {
        goto loc_80194410;
    }
}

loc_80194460:
{
    r27 = 0;
    r28 = 0;
    goto loc_801944A8;
}

loc_8019446C:
{
    r0 = MemoryInline::FlatRead32((r29 + 24));
    r4 = (r0 + r28);
    r28_addr_2 = (r28 + r0);
    r3 = MemoryInline::FlatRead32(r28_addr_2);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A162Cu>(ctx);
    r3 = MemoryInline::FlatRead32((r29 + 24));
    r3_addr_4 = (r3 + r28);
    r4 = MemoryInline::FlatRead32(r3_addr_4);
}

loc_8019448C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80194498;
    }
}

loc_80194490:
{
    r0 = (r4 + -2147483648);
    goto loc_8019449C;
}

loc_80194498:
{
    r0 = 0;
}

loc_8019449C:
{
    r3_addr_5 = (r3 + r28);
    MemoryInline::FlatWrite32(r3_addr_5, r0);
    r28 = (r28 + 8);
    r27 = (r27 + 1);
}

loc_801944A8:
{
    r4 = MemoryInline::FlatRead32((r29 + 16));
}

loc_801944B0:
{
    if ((static_cast<uint32_t>(r27) < static_cast<uint32_t>(r4))) {
        goto loc_8019446C;
    }
}

loc_801944B4:
{
    r0 = MemoryInline::FlatRead32((r29 + 20));
    r3 = MemoryInline::FlatRead32((r29 + 24));
    r0 = (r4 + r0);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r4 = (r4_rot_1 & -8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A162Cu>(ctx);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_801944CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801944D8;
    }
}

loc_801944D0:
{
    r0 = (r30 + -2147483648);
    goto loc_801944DC;
}

loc_801944D8:
{
    r0 = 0;
}

loc_801944DC:
{
    MemoryInline::FlatWrite32((r29 + 24), r0);
}

loc_801944E0:
{
    r11 = (r1 + 32);
    r3 = r31;
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFC0000FB gpr_write=0xFC00083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801943C0 func_801943C0 preserves=true fpr_mask=0x00000000
