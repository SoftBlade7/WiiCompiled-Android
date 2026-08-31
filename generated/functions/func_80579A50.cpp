#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80579A50(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80579A50;

loc_80579A50:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x808B0000u;
    r31 = (r31 + 22768);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    r4 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80579A80:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80579CCC;
    }
}

loc_80579A84:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 8192);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80579A8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80579CCC;
    }
}

loc_80579A90:
{
    r3 = 0x809C0000u;
    r4 = 0;
    r5 = MemoryInline::FlatRead32((r3 + -10456));
    r3 = MemoryInline::FlatRead32((r5 + 2928));
    r3 = (r3 + -3);
}

loc_80579AA8:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(7))) {
        goto loc_80579AC0;
    }
}

loc_80579AAC:
{
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
    r0 = (r0 & 193);
}

loc_80579AB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80579AC0;
    }
}

loc_80579ABC:
{
    r4 = 1;
}

loc_80579AC0:
{
}

loc_80579AC4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80579B88;
    }
}

loc_80579AC8:
{
    r0 = MemoryInline::FlatRead32((r5 + 2936));
}

loc_80579AD0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80579B88;
    }
}

loc_80579AD4:
{
    r3 = r30;
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r0 = (r3 & 255);
    r3 = 0x809C0000u;
    r0 = (r0 * 24);
    r3 = MemoryInline::FlatRead32((r3 + 18248));
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 964));
}

loc_80579AF8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80579B88;
    }
}

loc_80579AFC:
{
    r0 = MemoryInline::FlatRead16((r30 + 564));
}

loc_80579B04:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80579B88;
    }
}

loc_80579B08:
{
    r4 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 20));
    r0 = (r0 | 128);
    MemoryInline::FlatWrite32((r4 + 20), r0);
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r4 = 0x809C0000u;
    r5 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = r3;
    r3 = MemoryInline::FlatRead32((r5 + -10448));
    r5 = MemoryInline::FlatRead32((r4 + 2928));
}

loc_80579B40:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(3))) {
        goto loc_80579B60;
    }
}

loc_80579B44:
{
    r4 = MemoryInline::FlatRead32((r4 + 2936));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80579B4C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80579B88;
    }
}

loc_80579B50:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r4 = (r0 & 255);
    ctx->lr = 0x80579B5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80538E00u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80579B88;
}

loc_80579B60:
{
}

loc_80579B64:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(9))) {
        goto loc_80579B70;
    }
}

loc_80579B68:
{
}

loc_80579B6C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(10))) {
        goto loc_80579B88;
    }
}

loc_80579B70:
{
    r4 = MemoryInline::FlatRead32((r4 + 2936));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80579B78:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80579B88;
    }
}

loc_80579B7C:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r4 = (r0 & 255);
    ctx->lr = 0x80579B88u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8053B6F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80579B88:
{
    r3 = r30;
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    r4 = MemoryInline::FlatRead32(r30);
    r6 = MemoryInline::FlatRead32((r3 + 104));
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r5 = MemoryInline::FlatRead32((r3 + 108));
    r0 = MemoryInline::FlatRead32((r4 + 20));
    r3 = MemoryInline::FlatRead32((r3 + 112));
    r0 = (r0 & 128);
}

loc_80579BAC:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r6);
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80579BC4;
    }
}

loc_80579BBC:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 720));
    goto loc_80579BC8;
}

loc_80579BC4:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 716));
}

loc_80579BC8:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    r3 = r30;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 104), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r3 + 108), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r3 + 112), f0.d);
    r3 = r30;
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 369), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32(r30);
    r4 = MemoryInline::FlatRead16((r31 + 724));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 & 128);
}

loc_80579C18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80579C20;
    }
}

loc_80579C1C:
{
    r4 = MemoryInline::FlatRead16((r31 + 726));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_80579C20:
{
    r3 = MemoryInline::FlatRead16((r30 + 564));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r30 + 564), static_cast<uint16_t>(r0));
    r0 = (r0 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r4));
}

loc_80579C34:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80579CCC;
    }
}

loc_80579C38:
{
    r4 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r0 & -8193);
    MemoryInline::FlatWrite32((r4 + 12), r0);
    r4 = MemoryInline::FlatRead32(r30);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r0 | 16384);
    MemoryInline::FlatWrite32((r4 + 12), r0);
    r4 = MemoryInline::FlatRead32(r30);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 20));
    r0 = (r0 & -129);
    MemoryInline::FlatWrite32((r4 + 20), r0);
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r4 = 0x809C0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1020);
    r4 = MemoryInline::FlatRead32((r4 + 8656));
    r5 = 1;
    r31 = 0;
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r4 + 104));
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    MemoryInline::FlatWrite8((r4 + 106), static_cast<uint8_t>(r5));
    r4 = MemoryInline::FlatRead32(r30);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 | 131072);
    MemoryInline::FlatWrite32((r4 + 8), r0);
    r0 = MemoryInline::FlatRead16((r30 + 596));
    MemoryInline::FlatWrite16((r30 + 564), static_cast<uint16_t>(r31));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r30 + 596), static_cast<uint16_t>(r0));
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    MemoryInline::FlatWrite8((r3 + 369), static_cast<uint8_t>(r31));
}

loc_80579CCC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFF81FFB gpr_write=0xFFF81FFB gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80579A50 func_80579A50 preserves=true fpr_mask=0x00000000
