#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801147C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801147C0;

loc_801147C0:
{
    MemoryInline::FlatWriteRam32((r1 + -4128), r1);
    r1 = (r1 + -4128);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 4132), r0);
    MemoryInline::FlatWriteRam32((r1 + 4124), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 4120), r30);
    r30 = r3;
}

loc_801147DC:
{
    r6 = MemoryInline::FlatRead32((r30 + 8));
    r3 = (r1 + 16);
    r4 = 1;
    r5 = 4096;
    ctx->lr = 0x801147F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8000E610u>(ctx);
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801147F4:
{
    r5 = r3;
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80114814;
    }
}

loc_801147FC:
{
    r3 = 1;
    r0 = 14;
    MemoryInline::FlatWrite32((r31 + 288), r3);
    r3 = 0;
    MemoryInline::FlatWrite32((r31 + 60), r0);
    goto loc_801148E8;
}

loc_80114814:
{
    r4 = MemoryInline::FlatRead32((r30 + 4));
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r3 = (r4 + r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80114824:
{
    MemoryInline::FlatWrite32((r30 + 4), r3);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80114844;
    }
}

loc_8011482C:
{
    r3 = 1;
    r0 = 14;
    MemoryInline::FlatWrite32((r31 + 288), r3);
    r3 = 0;
    MemoryInline::FlatWrite32((r31 + 60), r0);
    goto loc_801148E8;
}

loc_80114844:
{
    r3 = r31;
    r4 = (r1 + 16);
    ctx->lr = 0x80114850u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8011248Cu>(ctx);
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80114854:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80114860;
    }
}

loc_80114858:
{
    r3 = 0;
    goto loc_801148E8;
}

loc_80114860:
{
    r4 = MemoryInline::FlatRead32((r30 + 4));
    r0 = MemoryInline::FlatRead32((r30 + 12));
}

loc_8011486C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_801148DC;
    }
}

loc_80114870:
{
    r3 = MemoryInline::FlatRead32((r31 + 352));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8011487C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801148D4;
    }
}

loc_80114880:
{
    r0 = 0;
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r30 + 12));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(30));
    r0 = (r0_rot_1 & -1073741824);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0 = (r0 - r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -1);
    r0 = (r0 + r3);
    r5 = (4 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(4) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(4));
}

loc_801148AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801148D4;
    }
}

loc_801148B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801148B4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801148D4;
    }
}

loc_801148B8:
{
    r3 = r31;
    r4 = (r1 + 8);
    ctx->lr = 0x801148C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8011248Cu>(ctx);
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801148C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801148D4;
    }
}

loc_801148CC:
{
    r3 = 0;
    goto loc_801148E8;
}

loc_801148D4:
{
    r3 = 1;
    goto loc_801148E8;
}

loc_801148DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_801148E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801147DC;
    }
}

loc_801148E4:
{
    r3 = 2;
}

loc_801148E8:
{
    r0 = MemoryInline::FlatRead32((r1 + 4132));
    r31 = MemoryInline::FlatRead32((r1 + 4124));
    r30 = MemoryInline::FlatRead32((r1 + 4120));
    ctx->lr = r0;
    r1 = (r1 + 4128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801147C0 func_801147C0 preserves=true fpr_mask=0x00000000
