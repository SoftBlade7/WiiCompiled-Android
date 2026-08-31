#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8000ED18(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mdest_1 = 0;
    uint32_t r4_mdest_2 = 0;
    uint32_t r4_mdest_3 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_mrot_1 = 0;
    uint32_t r4_mrot_2 = 0;
    uint32_t r4_mrot_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8000ED18;

loc_8000ED18:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8000ED24:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000ED40;
    }
}

loc_8000ED38:
{
    ctx->lr = 0x8000ED3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000CA70u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8000EE34;
}

loc_8000ED40:
{
    r0 = MemoryInline::FlatRead8((r3 + 10));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8000ED48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000ED58;
    }
}

loc_8000ED4C:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(10));
    r0 = (r0_rot_1 & 7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8000ED54:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000ED60;
    }
}

loc_8000ED58:
{
    r3 = -1;
    goto loc_8000EE34;
}

loc_8000ED60:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(5));
    r0 = (r0_rot_2 & 7);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8000ED68:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000ED74;
    }
}

loc_8000ED6C:
{
    r3 = 0;
    goto loc_8000EE34;
}

loc_8000ED74:
{
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & 7);
}

loc_8000ED80:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(3))) {
        goto loc_8000ED90;
    }
}

loc_8000ED84:
{
    r0 = 2;
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r4_mrot_1 = (r4_rot_1 & -536870912);
    r4_mdest_1 = (r4 & 536870911);
    r4 = (r4_mdest_1 | r4_mrot_1);
    MemoryInline::FlatWrite32((r3 + 8), r4);
}

loc_8000ED90:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_4 & 7);
}

loc_8000ED9C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8000EDA8;
    }
}

loc_8000EDA0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 40), r0);
}

loc_8000EDA8:
{
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r0 = (r0_rot_5 & 7);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8000EDB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000EDC8;
    }
}

loc_8000EDB8:
{
    r0 = (r4 & 536870911);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r3 = 0;
    goto loc_8000EE34;
}

loc_8000EDC8:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(10));
    r0 = (r0_rot_6 & 7);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8000EDD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000EDE0;
    }
}

loc_8000EDD8:
{
    r30 = 0;
    goto loc_8000EDEC;
}

loc_8000EDE0:
{
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000C21Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r30 = r3;
}

loc_8000EDEC:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x8000EDF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000E558u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8000EDFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000EE18;
    }
}

loc_8000EE00:
{
    r3 = 1;
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 10), static_cast<uint8_t>(r3));
    r3 = -1;
    MemoryInline::FlatWrite32((r31 + 40), r0);
    goto loc_8000EE34;
}

loc_8000EE18:
{
    r0 = MemoryInline::FlatRead32((r31 + 8));
    r4 = 0;
    MemoryInline::FlatWrite32((r31 + 24), r30);
    r3 = 0;
    r0 = (r0 & 536870911);
    MemoryInline::FlatWrite32((r31 + 8), r0);
    MemoryInline::FlatWrite32((r31 + 40), r4);
}

loc_8000EE34:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8000ED18 func_8000ED18 preserves=true fpr_mask=0x00000000
