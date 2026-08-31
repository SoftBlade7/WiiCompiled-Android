#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8011D2B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8011D2B0;

loc_8011D2B0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8011D2BC:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8011D2E4;
    }
}

loc_8011D2DC:
{
    r3 = r31;
    goto loc_8011D3B8;
}

loc_8011D2E4:
{
    r3 = r30;
    r4 = (r13 + -29956);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001329Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8011D2F4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8011D300;
    }
}

loc_8011D2F8:
{
    r3 = MemoryInline::FlatRead32((r29 + 28));
    goto loc_8011D3B8;
}

loc_8011D300:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8011D304:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8011D310;
    }
}

loc_8011D308:
{
    r3 = 0;
    goto loc_8011D334;
}

loc_8011D310:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r4 = (r1 + 8);
    r3 = MemoryInline::FlatRead32((r29 + 24));
    ctx->lr = 0x8011D320u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F00DCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8011D324:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8011D330;
    }
}

loc_8011D328:
{
    r3 = 0;
    goto loc_8011D334;
}

loc_8011D330:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8011D334:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8011D338:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8011D344;
    }
}

loc_8011D33C:
{
    r3 = r31;
    goto loc_8011D3B8;
}

loc_8011D344:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_8011D34C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(45))) {
        goto loc_8011D358;
    }
}

loc_8011D350:
{
    r4 = r3;
    goto loc_8011D35C;
}

loc_8011D358:
{
    r4 = (r3 + 1);
}

loc_8011D35C:
{
    r5 = MemoryInline::FlatRead8(r4);
    r0 = 0;
}

loc_8011D368:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_8011D374;
    }
}

loc_8011D36C:
{
}

loc_8011D370:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(256))) {
        goto loc_8011D378;
    }
}

loc_8011D374:
{
    r0 = 1;
}

loc_8011D378:
{
}

loc_8011D37C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8011D388;
    }
}

loc_8011D380:
{
    r0 = 0;
    goto loc_8011D3A4;
}

loc_8011D388:
{
    r4 = 0x80270000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r4 = (r4 + 4424);
    r4 = MemoryInline::FlatRead32((r4 + 56));
    r4 = MemoryInline::FlatRead32((r4 + 8));
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead16(r4_addr_1);
    r0 = (r0 & 8);
}

loc_8011D3A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8011D3A8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8011D3B4;
    }
}

loc_8011D3AC:
{
    r3 = r31;
    goto loc_8011D3B8;
}

loc_8011D3B4:
{
    ctx->lr = 0x8011D3B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001543Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8011D3B8:
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8011D2B0 func_8011D2B0 preserves=true fpr_mask=0x00000000
