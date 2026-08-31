#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80088000(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80088000;

loc_80088000:
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

loc_80088018:
{
    r26 = r4;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800880DC;
    }
}

loc_80088020:
{
    r4 = MemoryInline::FlatRead32(r3);
    r0 = (r4 + -1379991552);
}

loc_8008802C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(21316))) {
        goto loc_80088038;
    }
}

loc_80088030:
{
    r0 = 0;
    goto loc_80088064;
}

loc_80088038:
{
    r5 = MemoryInline::FlatRead16((r3 + 6));
}

loc_80088040:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(256))) {
        goto loc_8008804C;
    }
}

loc_80088044:
{
    r0 = 0;
    goto loc_80088064;
}

loc_8008804C:
{
    r0 = (256 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(256) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r4 = 256;
    r4 = (r4 | ~r5);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
    r0 = (r4 - r0);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
}

loc_80088064:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80088068:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800880DC;
    }
}

loc_8008806C:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r28 = (r0 + r3);
    r3 = MemoryInline::FlatRead8((r28 + 12));
    r5 = (r28 + 8);
    r4 = MemoryInline::FlatRead32((r28 + 16));
    // inline leaf 0x800AD080 (9 guest instruction(s))
}

loc_inl1_0x800AD080:
{
}

loc_inl1_0x800AD084:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_inl1_0x800AD090;
    }
}

loc_inl1_0x800AD088:
{
    r3 = (r4 + r5);
    goto loc_inl1_cont_800AD080;
}

loc_inl1_0x800AD090:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl1_0x800AD094:
{
    r3 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x800AD09C:
{
    r3 = r4;
    goto loc_inl1_cont_800AD080;
}

loc_inl1_return:
{
}

loc_inl1_cont_800AD080:
{
    // end of inlined leaf 0x800AD080
    r31 = r3;
    r27 = 0;
    r29 = r31;
    goto loc_800880D0;
}

loc_80088094:
{
    r3 = MemoryInline::FlatRead8((r29 + 16));
    r5 = (r28 + 8);
    r4 = MemoryInline::FlatRead32((r29 + 20));
    // inline leaf 0x800AD080 (9 guest instruction(s))
}

loc_inl2_0x800AD080:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_inl2_0x800AD084:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl2_0x800AD090;
    }
}

loc_inl2_0x800AD088:
{
    r3 = (r4 + r5);
    goto loc_inl2_cont_800AD080;
}

loc_inl2_0x800AD090:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl2_0x800AD094:
{
    r3 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x800AD09C:
{
    r3 = r4;
    goto loc_inl2_cont_800AD080;
}

loc_inl2_return:
{
}

loc_inl2_cont_800AD080:
{
    // end of inlined leaf 0x800AD080
    r30 = r3;
    r3 = MemoryInline::FlatRead8((r3 + 8));
    r4 = MemoryInline::FlatRead32((r30 + 12));
    r5 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800AD0B0u>(ctx);
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r4 = r3;
    r3 = r26;
    ctx->lr = 0x800880C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8009DF00u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r30 + 4), r3);
    r29 = (r29 + 20);
    r27 = (r27 + 1);
}

loc_800880D0:
{
    r0 = MemoryInline::FlatRead32(r31);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r27), static_cast<uint32_t>(r0));
}

loc_800880D8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80088094;
    }
}

loc_800880DC:
{
    r11 = (r1 + 32);
    {
        uint8_t* const guest_thunk_stack = MemoryInline::ResolveRangeHost((r11 + -24), 0, 24u, true, false);
        r26 = MemoryInline::ReadResolved32(guest_thunk_stack, 0u, (r11 + -24));
        r27 = MemoryInline::ReadResolved32(guest_thunk_stack, 4u, (r11 + -20));
        r28 = MemoryInline::ReadResolved32(guest_thunk_stack, 8u, (r11 + -16));
        r29 = MemoryInline::ReadResolved32(guest_thunk_stack, 12u, (r11 + -12));
        r30 = MemoryInline::ReadResolved32(guest_thunk_stack, 16u, (r11 + -8));
        r31 = MemoryInline::ReadResolved32(guest_thunk_stack, 20u, (r11 + -4));
    }
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
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFC0001FB gpr_write=0xFC0009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80088000 func_80088000 preserves=true fpr_mask=0x00000000
