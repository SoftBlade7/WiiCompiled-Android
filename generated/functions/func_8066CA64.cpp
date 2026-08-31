#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8066CA64(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8066CA64;

loc_8066CA64:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 16884));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8066CA8C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066CB10;
    }
}

loc_8066CA90:
{
    r0 = 636;
    r4 = r29;
    r5 = 0;
    ctr = r0;
}

loc_8066CAA0:
{
    r0 = MemoryInline::FlatRead16((r4 + 784));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8066CAA8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066CB04;
    }
}

loc_8066CAAC:
{
    r0 = MemoryInline::FlatRead16((r4 + 786));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8066CAB4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066CB04;
    }
}

loc_8066CAB8:
{
    r0 = MemoryInline::FlatRead16((r4 + 788));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(13));
}

loc_8066CAC0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066CB04;
    }
}

loc_8066CAC4:
{
    r0 = MemoryInline::FlatRead16((r4 + 790));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(10));
}

loc_8066CACC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066CB04;
    }
}

loc_8066CAD0:
{
    r0 = (r5 + 4);
    r31_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r31 = (r31_rot_0 & -2);
    r3 = (r3 + r31);
    r3 = (r3 + 784);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80017998u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(639));
}

loc_8066CAE8:
{
    MemoryInline::FlatWrite32(r30, r3);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8066CAFC;
    }
}

loc_8066CAF0:
{
    r3 = (r29 + r31);
    r3 = (r3 + 784);
    goto loc_8066CB14;
}

loc_8066CAFC:
{
    r3 = 0;
    goto loc_8066CB14;
}

loc_8066CB04:
{
    r4 = (r4 + 2);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8066CAA0;
    }
}

loc_8066CB10:
{
    r3 = 0;
}

loc_8066CB14:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000003B gpr_write=0xE000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8066CA64 func_8066CA64 preserves=true fpr_mask=0x00000000
