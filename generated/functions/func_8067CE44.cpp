#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8067CE44(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r30_addr_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;

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

    goto loc_8067CE44;

loc_8067CE44:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r27);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    r30 = 0;
    r29 = 0;
    goto loc_8067CE7C;
}

loc_8067CE64:
{
    r3 = MemoryInline::FlatRead32((r31 + 2520));
    r4 = r30;
    r3_addr_2 = (r3 + r29);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    ctx->lr = 0x8067CE74u;
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
    InvokeDirectCpu<0x8067DE14u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r29 = (r29 + 4);
    r30 = (r30 + 1);
}

loc_8067CE7C:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r0));
}

loc_8067CE84:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8067CE64;
    }
}

loc_8067CE88:
{
    r28 = 0;
    r29 = 0;
    r30 = 0x809C0000u;
    goto loc_8067CEC8;
}

loc_8067CE98:
{
    r3 = MemoryInline::FlatRead32((r30 + -10456));
    r4 = (r28 & 255);
    // inline leaf 0x80531F18 (5 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 45));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    // end of inlined leaf 0x80531F18
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_8067CEAC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_8067CEC0;
    }
}

loc_8067CEB0:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 104u, (r31 + 104));
    r4 = 1;
    r3_addr_4 = (r3 + r29);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
    // inline leaf 0x80693D58 (11 guest instruction(s))
}

loc_inl1_0x80693D58:
{
}

loc_inl1_0x80693D5C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x80693D70;
    }
}

loc_inl1_0x80693D60:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 7), static_cast<uint8_t>(r0));
    goto loc_inl1_cont_80693D58;
}

loc_inl1_0x80693D70:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 7), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 6), static_cast<uint8_t>(r0));
}

loc_inl1_cont_80693D58:
{
    // end of inlined leaf 0x80693D58
}

loc_8067CEC0:
{
    r29 = (r29 + 4);
    r28 = (r28 + 1);
}

loc_8067CEC8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 2542u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r31);
}

loc_8067CED0:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(r0))) {
        goto loc_8067CE98;
    }
}

loc_8067CED4:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 2540u, (r31 + 2540));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8067CEDC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8067CF60;
    }
}

loc_8067CEE0:
{
    r28 = 0;
    r30 = 0;
    goto loc_8067CF54;
}

loc_8067CEEC:
{
    r27 = 0;
    r29 = 0;
    goto loc_8067CF40;
}

loc_8067CEF8:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 2520u, (r31 + 2520));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r27)));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r31 + 60));
    r30_addr_3 = (r30 + r4);
    r5 = MemoryInline::FlatRead32(r30_addr_3);
    r4 = MemoryInline::FlatRead32(r5);
    r5 = MemoryInline::FlatRead32((r5 + 12));
    r4_addr_3 = (r4 + r3);
    r3 = MemoryInline::FlatRead8(r4_addr_3);
    r5_addr_3 = (r5 + r29);
    r4 = MemoryInline::FlatRead32(r5_addr_3);
}

loc_8067CF1C:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(r0))) {
        goto loc_8067CF38;
    }
}

loc_8067CF20:
{
}

loc_8067CF24:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(1))) {
        goto loc_8067CF38;
    }
}

loc_8067CF28:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 104u, (r31 + 104));
    r4 = 0;
    r3_addr_8 = (r3 + r29);
    r3 = MemoryInline::FlatRead32(r3_addr_8);
    // inline leaf 0x80693D58 (11 guest instruction(s))
}

loc_inl2_0x80693D58:
{
}

loc_inl2_0x80693D5C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x80693D70;
    }
}

loc_inl2_0x80693D60:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 7), static_cast<uint8_t>(r0));
    goto loc_inl2_cont_80693D58;
}

loc_inl2_0x80693D70:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 7), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 6), static_cast<uint8_t>(r0));
}

loc_inl2_cont_80693D58:
{
    // end of inlined leaf 0x80693D58
}

loc_8067CF38:
{
    r29 = (r29 + 4);
    r27 = (r27 + 1);
}

loc_8067CF40:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r31);
}

loc_8067CF48:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r0))) {
        goto loc_8067CEF8;
    }
}

loc_8067CF4C:
{
    r30 = (r30 + 4);
    r28 = (r28 + 1);
}

loc_8067CF54:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r31 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(r0));
}

loc_8067CF5C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8067CEEC;
    }
}

loc_8067CF60:
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

// RECOMP_GUEST_ABI gpr_read=0xFFF01FFB gpr_write=0xFFF01FFB gpr_return=0x00000018 fpr_read=0xE0000003 fpr_write=0xE0000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8067CE44 func_8067CE44 preserves=true fpr_mask=0x00000000
