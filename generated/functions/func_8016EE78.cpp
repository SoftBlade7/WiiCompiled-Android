#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8016EE78(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r7_mdest_0 = 0;
    uint32_t r7_mdest_1 = 0;
    uint32_t r7_mdest_2 = 0;
    uint32_t r7_mrot_0 = 0;
    uint32_t r7_mrot_1 = 0;
    uint32_t r7_mrot_2 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8016EE78;

loc_8016EE78:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = MemoryInline::FlatRead32((r2 + -26840));
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = MemoryInline::FlatRead32((r31 + 1532));
    r0 = (r30 & 1);
}

loc_8016EE98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8016EEA0;
    }
}

loc_8016EE9C:
{
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801712F0u>(ctx);
}

loc_8016EEA0:
{
    r0 = (r30 & 2);
}

loc_8016EEA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8016EEAC;
    }
}

loc_8016EEA8:
{
    // inline leaf 0x80171BF4 (1 guest instruction(s))
    // end of inlined leaf 0x80171BF4
}

loc_8016EEAC:
{
    r0 = (r30 & 4);
}

loc_8016EEB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8016EED4;
    }
}

loc_8016EEB4:
{
    r4 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = 0;
    r5 = MemoryInline::FlatRead32((r2 + -26840));
    r3 = MemoryInline::FlatRead32((r5 + 596));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r0));
}

loc_8016EED4:
{
    r0 = (r30 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8016EED8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8016EEE0;
    }
}

loc_8016EEDC:
{
    ctx->lr = 0x8016EEE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8016D814u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8016EEE0:
{
    r0 = (r30 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8016EEE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8016EEEC;
    }
}

loc_8016EEE8:
{
    ctx->lr = 0x8016EEECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8016DFCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8016EEEC:
{
    r0 = (r30 & 24);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8016EEF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8016EEF8;
    }
}

loc_8016EEF4:
{
    ctx->lr = 0x8016EEF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8016D8C4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8016EEF8:
{
    r30 = (r30 & -256);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8016EEFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8016F0D0;
    }
}

loc_8016EF00:
{
    r4 = (r30 & 3840);
}

loc_8016EF04:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8016EF98;
    }
}

loc_8016EF08:
{
    r0 = (r4 & 256);
}

loc_8016EF0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8016EF2C;
    }
}

loc_8016EF10:
{
    r3 = -872349696;
    r0 = 16;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = 4106;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 168));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
}

loc_8016EF2C:
{
    r0 = (r4 & 512);
}

loc_8016EF30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8016EF50;
    }
}

loc_8016EF34:
{
    r3 = -872349696;
    r0 = 16;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = 4107;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 172));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
}

loc_8016EF50:
{
    r0 = (r4 & 1024);
}

loc_8016EF54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8016EF74;
    }
}

loc_8016EF58:
{
    r3 = -872349696;
    r0 = 16;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = 4108;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 176));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
}

loc_8016EF74:
{
    r0 = (r4 & 2048);
}

loc_8016EF78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8016EF98;
    }
}

loc_8016EF7C:
{
    r3 = -872349696;
    r0 = 16;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = 4109;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 180));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
}

loc_8016EF98:
{
    r7 = (r30 & 16777216);
    r7_mrot_1 = (r30 & 61440);
    r7_mdest_1 = (r7 & -61441);
    r7 = (r7_mdest_1 | r7_mrot_1);
}

loc_8016EFA0:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8016F010;
    }
}

loc_8016EFA4:
{
    r0 = (r7 & 16777216);
}

loc_8016EFA8:
{
    r6 = 4110;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8016EFD0;
    }
}

loc_8016EFB0:
{
    r5 = MemoryInline::FlatRead32((r31 + 596));
    r3 = -872349696;
    r4 = 16;
    r0 = 4105;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(28));
    r4 = (r4_rot_1 & 7);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r4));
}

loc_8016EFD0:
{
    r5 = r31;
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(20));
    r7 = (r7_rot_1 & 15);
    r4 = 16;
    r3 = -872349696;
    goto loc_8016F008;
}

loc_8016EFE4:
{
    r0 = (r7 & 1);
}

loc_8016EFE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8016EFFC;
    }
}

loc_8016EFEC:
{
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r6));
    r0 = MemoryInline::FlatRead32((r5 + 184));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
}

loc_8016EFFC:
{
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(31));
    r7 = (r7_rot_3 & 2147483647);
    r5 = (r5 + 4);
    r6 = (r6 + 1);
}

loc_8016F008:
{
}

loc_8016F00C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8016EFE4;
    }
}

loc_8016F010:
{
    r8 = (r30 & 50266112);
}

loc_8016F014:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_8016F098;
    }
}

loc_8016F018:
{
    r0 = (r8 & 33554432);
}

loc_8016F01C:
{
    r6 = 4160;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8016F044;
    }
}

loc_8016F024:
{
    r5 = MemoryInline::FlatRead32((r31 + 596));
    r3 = -872349696;
    r4 = 16;
    r0 = 4159;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    r4 = (r5 & 15);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r4));
}

loc_8016F044:
{
    r7 = r31;
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(16));
    r8 = (r8_rot_1 & 255);
    r4 = 16;
    r3 = -872349696;
    goto loc_8016F090;
}

loc_8016F058:
{
    r0 = (r8 & 1);
}

loc_8016F05C:
{
    r5 = (r6 + 16);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8016F084;
    }
}

loc_8016F064:
{
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r6));
    r0 = MemoryInline::FlatRead32((r7 + 200));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r5));
    r0 = MemoryInline::FlatRead32((r7 + 232));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
}

loc_8016F084:
{
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(31));
    r8 = (r8_rot_3 & 2147483647);
    r6 = (r6 + 1);
    r7 = (r7 + 4);
}

loc_8016F090:
{
}

loc_8016F094:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8016F058;
    }
}

loc_8016F098:
{
    r0 = (r30 & 67108864);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8016F09C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8016F0B0;
    }
}

loc_8016F0A0:
{
    r3 = 0;
    ctx->lr = 0x8016F0A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80173544u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 5;
    ctx->lr = 0x8016F0B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80173544u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8016F0B0:
{
    r0 = (r30 & 268435456);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8016F0B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8016F0BC;
    }
}

loc_8016F0B8:
{
    ctx->lr = 0x8016F0BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801732E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8016F0BC:
{
    r0 = (r30 & 134217728);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8016F0C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8016F0C8;
    }
}

loc_8016F0C4:
{
    ctx->lr = 0x8016F0C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80172FD8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8016F0C8:
{
    r0 = 1;
    MemoryInline::FlatWrite16((r31 + 2), static_cast<uint16_t>(r0));
}

loc_8016F0D0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 1532), r0);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8016EE78 func_8016EE78 preserves=true fpr_mask=0x00000000
