#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807E3CAC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807E3CAC;

loc_807E3CAC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(3));
}

loc_807E3CB8:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807E3DBC;
    }
}

loc_807E3CD0:
{
    r0 = MemoryInline::FlatRead32((r3 + 424));
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r8 = (r8_rot_0 & -2);
    r0 = PPC_Divw(static_cast<int32_t>(r5), static_cast<int32_t>(r8));
    r0 = (r0 * r8);
    r7 = (r5 - r0);
}

loc_807E3CE8:
{
    if ((static_cast<int32_t>(r8) <= static_cast<int32_t>(r7))) {
        goto loc_807E3D20;
    }
}

loc_807E3CEC:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r0 = (r3 + r0);
    r6 = (r0 + r7);
    r0 = MemoryInline::FlatRead8((r6 + 396));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807E3D00:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807E3D20;
    }
}

loc_807E3D04:
{
    r5 = 0x808A0000u;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(5));
    r0 = (r0_rot_2 & -32);
    r5 = (r5 + 32224);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r3 = (r3_rot_0 & -4);
    r0 = (r5 + r0);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    goto loc_807E3DE8;
}

loc_807E3D20:
{
    r0 = PPC_Divw(static_cast<int32_t>(r5), static_cast<int32_t>(r8));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r6 = (r6_rot_1 & -8);
    r7 = 0;
    r6 = (r3 + r6);
    r3 = r6;
    r0 = (r0 * r8);
    r5 = (r5 - r0);
    r0 = (r5 + 1);
    ctr = r0;
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_807E3D60;
    }
}

loc_807E3D48:
{
    r0 = MemoryInline::FlatRead8((r3 + 396));
}

loc_807E3D50:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807E3D58;
    }
}

loc_807E3D54:
{
    r7 = (r7 + 1);
}

loc_807E3D58:
{
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807E3D48;
    }
}

loc_807E3D60:
{
    r0 = (8 - r8);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(8) >= static_cast<uint32_t>(r8) ? 1u : 0u) << 29);
    r3 = (r6 + r8);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(8));
}

loc_807E3D70:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807E3DB4;
    }
}

loc_807E3D74:
{
    r0 = MemoryInline::FlatRead8((r3 + 396));
}

loc_807E3D7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807E3D84;
    }
}

loc_807E3D80:
{
    r7 = (r7 + -1);
}

loc_807E3D84:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_807E3D88:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807E3DA8;
    }
}

loc_807E3D8C:
{
    r5 = 0x808A0000u;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(5));
    r0 = (r0_rot_4 & -32);
    r5 = (r5 + 32224);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & -4);
    r0 = (r5 + r0);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    goto loc_807E3DE8;
}

loc_807E3DA8:
{
    r3 = (r3 + 1);
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807E3D74;
    }
}

loc_807E3DB4:
{
    r3 = -1;
    goto loc_807E3DE8;
}

loc_807E3DBC:
{
    r3 = 30;
    ctx->lr = 0x807E3DC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8081D020u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807E3DC8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807E3DD0;
    }
}

loc_807E3DCC:
{
    r31 = (r31 + 1);
}

loc_807E3DD0:
{
    r3 = MemoryInline::FlatRead32((r30 + 424));
    r0 = PPC_Divw(static_cast<int32_t>(r31), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r0 = (r31 - r0);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & -2);
    r3 = (r3 + 30);
}

loc_807E3DE8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC0001FFB gpr_write=0xC0001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x807E3CAC func_807E3CAC preserves=true fpr_mask=0x00000000
