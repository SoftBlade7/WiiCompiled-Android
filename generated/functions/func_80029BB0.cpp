#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80029BB0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80029BB0;

loc_80029BB0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r31 = 1;
    MemoryInline::FlatWrite8((r3 + 262), static_cast<uint8_t>(r31));
    r27 = r3;
    r4 = 0;
    r30 = -1;
    goto loc_80029BF8;
}

loc_80029BDC:
{
    MemoryInline::FlatWrite8((r3 + 141), static_cast<uint8_t>(r31));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r13 + -27400));
    r0 = (r0 & 65535);
}

loc_80029BF0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80029BF8;
    }
}

loc_80029BF4:
{
    MemoryInline::FlatWrite32((r13 + -27400), r30);
}

loc_80029BF8:
{
    r3 = (r27 + 192);
    // inline leaf 0x800AF180 (8 guest instruction(s))
}

loc_inl1_0x800AF180:
{
}

loc_inl1_0x800AF184:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800AF190;
    }
}

loc_inl1_0x800AF188:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl1_cont_800AF180;
}

loc_inl1_0x800AF190:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl1_cont_800AF180:
{
    // end of inlined leaf 0x800AF180
}

loc_80029C04:
{
    r4 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80029BDC;
    }
}

loc_80029C0C:
{
    r0 = MemoryInline::FlatRead32((r27 + 188));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80029C14:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80029CA8;
    }
}

loc_80029C18:
{
    r29 = 0;
    r31 = -1;
    r30 = 1;
    goto loc_80029C8C;
}

loc_80029C28:
{
    r0 = MemoryInline::FlatRead8((r3 + 262));
}

loc_80029C30:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80029C8C;
    }
}

loc_80029C34:
{
    r28 = MemoryInline::FlatRead32((r3 + 244));
    goto loc_80029C84;
}

loc_80029C3C:
{
}

loc_80029C40:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(r27))) {
        goto loc_80029C80;
    }
}

loc_80029C44:
{
    MemoryInline::FlatWrite8((r29 + 262), static_cast<uint8_t>(r30));
    r4 = 0;
    goto loc_80029C6C;
}

loc_80029C50:
{
    MemoryInline::FlatWrite8((r3 + 141), static_cast<uint8_t>(r30));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r13 + -27400));
    r0 = (r0 & 65535);
}

loc_80029C64:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80029C6C;
    }
}

loc_80029C68:
{
    MemoryInline::FlatWrite32((r13 + -27400), r31);
}

loc_80029C6C:
{
    r3 = (r29 + 192);
    // inline leaf 0x800AF180 (8 guest instruction(s))
}

loc_inl2_0x800AF180:
{
}

loc_inl2_0x800AF184:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800AF190;
    }
}

loc_inl2_0x800AF188:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl2_cont_800AF180;
}

loc_inl2_0x800AF190:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl2_cont_800AF180:
{
    // end of inlined leaf 0x800AF180
}

loc_80029C78:
{
    r4 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80029C50;
    }
}

loc_80029C80:
{
    r28 = MemoryInline::FlatRead32((r28 + 244));
}

loc_80029C84:
{
}

loc_80029C88:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_80029C3C;
    }
}

loc_80029C8C:
{
    r3 = MemoryInline::FlatRead32((r27 + 188));
    r4 = r29;
    r3 = (r3 + 36);
    // inline leaf 0x800AF180 (8 guest instruction(s))
}

loc_inl3_0x800AF180:
{
}

loc_inl3_0x800AF184:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x800AF190;
    }
}

loc_inl3_0x800AF188:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl3_cont_800AF180;
}

loc_inl3_0x800AF190:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl3_cont_800AF180:
{
    // end of inlined leaf 0x800AF180
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80029CA0:
{
    r29 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80029C28;
    }
}

loc_80029CA8:
{
    r11 = (r1 + 32);
    {
        uint8_t* const guest_thunk_stack = MemoryInline::ResolveRangeHost((r11 + -20), 0, 20u, true, false);
        r27 = MemoryInline::ReadResolved32(guest_thunk_stack, 0u, (r11 + -20));
        r28 = MemoryInline::ReadResolved32(guest_thunk_stack, 4u, (r11 + -16));
        r29 = MemoryInline::ReadResolved32(guest_thunk_stack, 8u, (r11 + -12));
        r30 = MemoryInline::ReadResolved32(guest_thunk_stack, 12u, (r11 + -8));
        r31 = MemoryInline::ReadResolved32(guest_thunk_stack, 16u, (r11 + -4));
    }
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF800201B gpr_write=0xF800081B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80029BB0 func_80029BB0 preserves=true fpr_mask=0x00000000
