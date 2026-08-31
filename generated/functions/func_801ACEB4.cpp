#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801ACEB4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r11_subfic_ra_0 = 0;
    uint32_t r1_addr_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801ACEB4;

loc_801ACEB4:
{
    r11 = (r1 & 31);
    r12 = r1;
    r11_subfic_ra_0 = r11;
    r11 = (-384 - r11_subfic_ra_0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(-384) >= static_cast<uint32_t>(r11_subfic_ra_0) ? 1u : 0u) << 29);
    r1_addr_0 = (r1 + r11);
    MemoryInline::FlatWrite32(r1_addr_0, r1);
    r1 = r1_addr_0;
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r12 + 4), r0);
    r0 = (r3 & 31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801ACED0:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r12 + -4), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r12 + -8), r30);
    r30 = 0;
    MemoryInline::FlatWriteRam32((r12 + -12), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r12 + -16), r28);
    r28 = r3;
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801ACF10;
    }
}

loc_801ACEFC:
{
    r4 = r28;
    r3 = (r1 + 128);
    r5 = 216;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r28 = (r1 + 128);
}

loc_801ACF10:
{
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r6 = (r1 + 32);
    r4 = MemoryInline::FlatRead32((r28 + 8));
    r5 = 0;
    ctx->lr = 0x801ACF24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80167A34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801ACF28:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801ACF58;
    }
}

loc_801ACF2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801ACF34;
    }
}

loc_801ACF30:
{
    goto loc_801ACF58;
}

loc_801ACF34:
{
    r0 = MemoryInline::FlatRead32((r1 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801ACF3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801ACF58;
    }
}

loc_801ACF40:
{
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r5 = (r1 + 64);
    r4 = MemoryInline::FlatRead32((r28 + 8));
    r6 = (r1 + 32);
    ctx->lr = 0x801ACF54u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80167A34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801ACF58:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801ACF5C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801AD058;
    }
}

loc_801ACF60:
{
    r0 = 8;
    r5 = 0;
    r4 = 0;
    ctr = r0;
}

loc_801ACF70:
{
    r6 = (r28 + r4);
    r0 = MemoryInline::FlatRead32((r6 + 152));
}

loc_801ACF7C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801ACFD0;
    }
}

loc_801ACF80:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r29, r0);
    r0 = MemoryInline::FlatRead32((r1 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801ACF90:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801ACFA0;
    }
}

loc_801ACF94:
{
    r0 = MemoryInline::FlatRead32((r6 + 156));
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_801AD058;
}

loc_801ACFA0:
{
    r5 = (r1 + 64);
    r0 = MemoryInline::FlatRead32((r6 + 156));
    r4 = (r5 + r4);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_801ACFB4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801ACFC4;
    }
}

loc_801ACFB8:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_801AD058;
}

loc_801ACFC4:
{
    r0 = (r0 - r4);
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_801AD058;
}

loc_801ACFD0:
{
}

loc_801ACFD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801ACFDC;
    }
}

loc_801ACFD8:
{
    r30 = (r5 + 1);
}

loc_801ACFDC:
{
    r5 = (r5 + 1);
    r4 = (r4 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801ACF70;
    }
}

loc_801ACFE8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_801ACFEC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801AD004;
    }
}

loc_801ACFF0:
{
    r4 = 0;
    r0 = -1;
    MemoryInline::FlatWrite32(r29, r4);
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_801AD058;
}

loc_801AD004:
{
    r30 = (r30 + -1);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(3));
    r6 = (r6_rot_1 & -8);
    r4 = (r28 + r6);
    r0 = MemoryInline::FlatRead32((r4 + 152));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_801AD018:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801AD050;
    }
}

loc_801AD01C:
{
    r0 = 4;
    MemoryInline::FlatWrite32(r29, r0);
    r5 = MemoryInline::FlatRead32((r4 + 156));
    MemoryInline::FlatWrite32(r31, r5);
    r0 = MemoryInline::FlatRead32((r1 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801AD034:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AD058;
    }
}

loc_801AD038:
{
    r0 = (r1 + 64);
    r4 = (r0 + r6);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r5 - r0);
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_801AD058;
}

loc_801AD050:
{
    r0 = 9;
    MemoryInline::FlatWrite32(r29, r0);
}

loc_801AD058:
{
    r10 = MemoryInline::FlatRead32(r1);
    r0 = MemoryInline::FlatRead32((r10 + 4));
    r31 = MemoryInline::FlatRead32((r10 + -4));
    r30 = MemoryInline::FlatRead32((r10 + -8));
    r29 = MemoryInline::FlatRead32((r10 + -12));
    r28 = MemoryInline::FlatRead32((r10 + -16));
    ctx->lr = r0;
    r1 = r10;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801ACEB4 func_801ACEB4 preserves=true fpr_mask=0x00000000
