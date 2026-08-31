#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80096DB4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80096DB4;

loc_80096DB4:
{
    r3 = r27;
    r4 = r25;
    // inline leaf 0x80099C00 (8 guest instruction(s))
}

loc_inl0_0x80099C00:
{
}

loc_inl0_0x80099C04:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(15))) {
        goto loc_inl0_0x80099C10;
    }
}

loc_inl0_0x80099C08:
{
    r3 = 0;
    goto loc_inl0_cont_80099C00;
}

loc_inl0_0x80099C10:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 276));
}

loc_inl0_cont_80099C00:
{
    // end of inlined leaf 0x80099C00
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80096DC4:
{
    r27 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009716C;
    }
}

loc_80096DCC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r28));
}

loc_80096DD0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009716C;
    }
}

loc_80096DD4:
{
    ctx->lr = 0x80096DD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8009B180u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32(r31);
    r3 = r27;
    r5 = r29;
    // inline leaf 0x8009B150 (4 guest instruction(s))
    r0 = (r4 + r5);
    MemoryInline::FlatWrite32((r3 + 80), r4);
    MemoryInline::FlatWrite32((r3 + 84), r0);
    // end of inlined leaf 0x8009B150
    r3 = r27;
    // inline leaf 0x8009B160 (7 guest instruction(s))
    r4 = 0;
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 126), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 116), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite32((r3 + 120), r4);
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8009B160
}

loc_8009716C:
{
    r11 = (r1 + 48);
    {
        uint8_t* const guest_thunk_stack = MemoryInline::ResolveRangeHost((r11 + -28), 0, 28u, true, false);
        r25 = MemoryInline::ReadResolved32(guest_thunk_stack, 0u, (r11 + -28));
        r26 = MemoryInline::ReadResolved32(guest_thunk_stack, 4u, (r11 + -24));
        r27 = MemoryInline::ReadResolved32(guest_thunk_stack, 8u, (r11 + -20));
        r28 = MemoryInline::ReadResolved32(guest_thunk_stack, 12u, (r11 + -16));
        r29 = MemoryInline::ReadResolved32(guest_thunk_stack, 16u, (r11 + -12));
        r30 = MemoryInline::ReadResolved32(guest_thunk_stack, 20u, (r11 + -8));
        r31 = MemoryInline::ReadResolved32(guest_thunk_stack, 24u, (r11 + -4));
    }
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80096DB4 func_80096DB4 preserves=true fpr_mask=0x00000000
