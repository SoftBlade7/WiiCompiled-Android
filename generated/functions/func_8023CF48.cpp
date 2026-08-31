#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8023CF48(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r27_addr_0 = 0;
    uint32_t r27_addr_1 = 0;
    uint32_t r27_addr_10 = 0;
    uint32_t r27_addr_11 = 0;
    uint32_t r27_addr_2 = 0;
    uint32_t r27_addr_3 = 0;
    uint32_t r27_addr_4 = 0;
    uint32_t r27_addr_5 = 0;
    uint32_t r27_addr_6 = 0;
    uint32_t r27_addr_7 = 0;
    uint32_t r27_addr_8 = 0;
    uint32_t r27_addr_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_13 = 0;
    uint32_t r3_addr_14 = 0;
    uint32_t r3_addr_15 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8023CF48;

loc_8023CF48:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r27);
    MemoryInline::FlatWriteRam32((r1 + 32), r28);
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r30 = r3;
    r27 = r5;
    r31 = r6;
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r3 = r4;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8023CF70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023CF7C;
    }
}

loc_8023CF74:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8023CF78:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8023CF84;
    }
}

loc_8023CF7C:
{
    r3 = 0;
    goto loc_8023D0E4;
}

loc_8023CF84:
{
    r4 = MemoryInline::FlatRead32(r30);
    r5 = r3;
    r3 = (r1 + 8);
    r28 = 0;
    r29 = 0;
    // inline leaf 0x8006F4A0 (17 guest instruction(s))
}

loc_inl0_0x8006F4A0:
{
    r0 = MemoryInline::FlatRead16((r4 + 10362));
}

loc_inl0_0x8006F4A8:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r0))) {
        goto loc_inl0_0x8006F4D0;
    }
}

loc_inl0_0x8006F4AC:
{
}

loc_inl0_0x8006F4B0:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_inl0_0x8006F4D0;
    }
}

loc_inl0_0x8006F4B4:
{
    r5 = (r5 * 12);
    r6 = MemoryInline::FlatRead32((r4 + 10372));
    r0 = (r4 + 10360);
    MemoryInline::FlatWriteRam32(r3, r0);
    r0 = (r6 + r5);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    goto loc_inl0_cont_8006F4A0;
}

loc_inl0_0x8006F4D0:
{
    r4 = (r4 + 10360);
    r0 = 0;
    MemoryInline::FlatWriteRam32(r3, r4);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
}

loc_inl0_cont_8006F4A0:
{
    // end of inlined leaf 0x8006F4A0
}

loc_8023CFA0:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_8023D0B4;
    }
}

loc_8023CFA4:
{
    r0 = 2;
    r4 = 0;
    ctr = r0;
}

loc_8023CFB0:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r3_addr_2 = (r3 + r4);
    r0 = MemoryInline::FlatRead8(r3_addr_2);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8023CFC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_8023CFEC;
    }
}

loc_8023CFC4:
{
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 262140);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    r0 = MemoryInline::FlatRead16((r3 + 118));
    r0 = (r0 & 1);
}

loc_8023CFDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8023CFEC;
    }
}

loc_8023CFE0:
{
    r27_addr_2 = (r27 + r29);
    MemoryInline::FlatWrite32(r27_addr_2, r3);
    r28 = (r28 + 1);
    r29 = (r29 + 4);
}

loc_8023CFEC:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r4 = (r4 + 1);
    r3_addr_5 = (r3 + r4);
    r0 = MemoryInline::FlatRead8(r3_addr_5);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8023D000:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_8023D02C;
    }
}

loc_8023D004:
{
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & 262140);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_6 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_6);
    r0 = MemoryInline::FlatRead16((r3 + 118));
    r0 = (r0 & 1);
}

loc_8023D01C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8023D02C;
    }
}

loc_8023D020:
{
    r27_addr_4 = (r27 + r29);
    MemoryInline::FlatWrite32(r27_addr_4, r3);
    r28 = (r28 + 1);
    r29 = (r29 + 4);
}

loc_8023D02C:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r4 = (r4 + 1);
    r3_addr_8 = (r3 + r4);
    r0 = MemoryInline::FlatRead8(r3_addr_8);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8023D040:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_8023D06C;
    }
}

loc_8023D044:
{
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & 262140);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_9 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_9);
    r0 = MemoryInline::FlatRead16((r3 + 118));
    r0 = (r0 & 1);
}

loc_8023D05C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8023D06C;
    }
}

loc_8023D060:
{
    r27_addr_6 = (r27 + r29);
    MemoryInline::FlatWrite32(r27_addr_6, r3);
    r28 = (r28 + 1);
    r29 = (r29 + 4);
}

loc_8023D06C:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r4 = (r4 + 1);
    r3_addr_11 = (r3 + r4);
    r0 = MemoryInline::FlatRead8(r3_addr_11);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8023D080:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_8023D0AC;
    }
}

loc_8023D084:
{
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & 262140);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_12 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_12);
    r0 = MemoryInline::FlatRead16((r3 + 118));
    r0 = (r0 & 1);
}

loc_8023D09C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8023D0AC;
    }
}

loc_8023D0A0:
{
    r27_addr_8 = (r27 + r29);
    MemoryInline::FlatWrite32(r27_addr_8, r3);
    r28 = (r28 + 1);
    r29 = (r29 + 4);
}

loc_8023D0AC:
{
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8023CFB0;
    }
}

loc_8023D0B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8023D0B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023D0E0;
    }
}

loc_8023D0BC:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r3 = MemoryInline::FlatRead8((r3 + 8));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_8023D0CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023D0D8;
    }
}

loc_8023D0D0:
{
    MemoryInline::FlatWrite32(r31, r3);
    goto loc_8023D0E0;
}

loc_8023D0D8:
{
    r0 = -1;
    MemoryInline::FlatWrite32(r31, r0);
}

loc_8023D0E0:
{
    r3 = r28;
}

loc_8023D0E4:
{
    r27 = MemoryInline::FlatRead32((r1 + 28));
    r28 = MemoryInline::FlatRead32((r1 + 32));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

// RECOMP_GUEST_ABI gpr_read=0xF800007B gpr_write=0xF800007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8023CF48 func_8023CF48 preserves=true fpr_mask=0x00000000
