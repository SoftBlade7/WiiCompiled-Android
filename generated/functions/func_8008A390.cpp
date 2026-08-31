#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8008A390(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r0_rot_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8008A390;

loc_8008A390:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32(r30);
    r31 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8008A3B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008A3C8;
    }
}

loc_8008A3BC:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 0;
    goto loc_8008A520;
}

loc_8008A3C8:
{
    r0 = MemoryInline::FlatRead32((r30 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8008A3D0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008A3E0;
    }
}

loc_8008A3D4:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 0;
    goto loc_8008A520;
}

loc_8008A3E0:
{
    r3 = r30;
    ctx->lr = 0x8008A3E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80089CC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8008A3EC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8008A48C;
    }
}

loc_8008A3F0:
{
    r4 = MemoryInline::FlatRead32(r30);
}

loc_8008A3F8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8008A410;
    }
}

loc_8008A3FC:
{
    r3 = MemoryInline::FlatRead16((r4 + 158));
    r0 = MemoryInline::FlatRead16((r4 + 160));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r3 = (r3_rot_1 & -65536);
    r3 = (r3 + r0);
    goto loc_8008A414;
}

loc_8008A410:
{
    r3 = 0;
}

loc_8008A414:
{
    r4 = MemoryInline::FlatRead32((r30 + 16));
    r0 = MemoryInline::FlatRead32((r30 + 20));
}

loc_8008A420:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8008A428;
    }
}

loc_8008A424:
{
    r4 = (r4 + -2147483648);
}

loc_8008A428:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8008A42C:
{
    r5 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008A448;
    }
}

loc_8008A434:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8008A438:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008A468;
    }
}

loc_8008A43C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8008A440:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008A470;
    }
}

loc_8008A444:
{
    goto loc_8008A478;
}

loc_8008A448:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r4 = (r3 - r0);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(28));
    r0 = (r0_rot_3 & 268435455);
    r3 = (r0 * 14);
    r0 = (r4 & 15);
    r3 = (r0 + r3);
    r5 = (r3 + -2);
    goto loc_8008A478;
}

loc_8008A468:
{
    r5 = (r3 - r4);
    goto loc_8008A478;
}

loc_8008A470:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
    r5 = (r3 - r0);
}

loc_8008A478:
{
    r3 = r31;
    r31 = (r5 + 1);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r31;
    goto loc_8008A520;
}

loc_8008A48C:
{
    r4 = MemoryInline::FlatRead32(r30);
}

loc_8008A494:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8008A4AC;
    }
}

loc_8008A498:
{
    r3 = MemoryInline::FlatRead16((r4 + 162));
    r0 = MemoryInline::FlatRead16((r4 + 164));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r3 = (r3_rot_3 & -65536);
    r3 = (r3 + r0);
    goto loc_8008A4B0;
}

loc_8008A4AC:
{
    r3 = 0;
}

loc_8008A4B0:
{
    r4 = MemoryInline::FlatRead32((r30 + 16));
    r0 = MemoryInline::FlatRead32((r30 + 20));
}

loc_8008A4BC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8008A4C4;
    }
}

loc_8008A4C0:
{
    r4 = (r4 + -2147483648);
}

loc_8008A4C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8008A4C8:
{
    r30 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008A4E4;
    }
}

loc_8008A4D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8008A4D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008A504;
    }
}

loc_8008A4D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8008A4DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008A50C;
    }
}

loc_8008A4E0:
{
    goto loc_8008A514;
}

loc_8008A4E4:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & -2);
    r4 = (r3 - r0);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(28));
    r0 = (r0_rot_7 & 268435455);
    r3 = (r0 * 14);
    r0 = (r4 & 15);
    r3 = (r0 + r3);
    r30 = (r3 + -2);
    goto loc_8008A514;
}

loc_8008A504:
{
    r30 = (r3 - r4);
    goto loc_8008A514;
}

loc_8008A50C:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(31));
    r0 = (r0_rot_5 & 2147483647);
    r30 = (r3 - r0);
}

loc_8008A514:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r30;
}

loc_8008A520:
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
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8008A390 func_8008A390 preserves=true fpr_mask=0x00000000
