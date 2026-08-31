#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8000C220(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mdest_1 = 0;
    uint32_t r6_mdest_2 = 0;
    uint32_t r6_mdest_3 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_mrot_1 = 0;
    uint32_t r6_mrot_2 = 0;
    uint32_t r6_mrot_3 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8000C220;

loc_8000C220:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(10));
    r0 = (r0_rot_0 & 7);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8000C24C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000C25C;
    }
}

loc_8000C250:
{
    r0 = MemoryInline::FlatRead8((r3 + 10));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8000C258:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000C26C;
    }
}

loc_8000C25C:
{
    r0 = 40;
    MemoryInline::FlatWrite32((r13 + -27600), r0);
    r3 = -1;
    goto loc_8000C3CC;
}

loc_8000C26C:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & 7);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8000C278:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000C2AC;
    }
}

loc_8000C27C:
{
    r4 = 0;
    ctx->lr = 0x8000C284u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8000E558u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8000C288:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000C2AC;
    }
}

loc_8000C28C:
{
    r4 = 0;
    MemoryInline::FlatWrite32((r30 + 40), r4);
    r0 = 1;
    r3 = -1;
    MemoryInline::FlatWrite8((r30 + 10), static_cast<uint8_t>(r0));
    r0 = 40;
    MemoryInline::FlatWrite32((r13 + -27600), r0);
    goto loc_8000C3CC;
}

loc_8000C2AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(1));
}

loc_8000C2B0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000C2CC;
    }
}

loc_8000C2B4:
{
    r3 = r30;
    r31 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8000C174u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r0 + r3);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
}

loc_8000C2CC:
{
}

loc_8000C2D0:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(2))) {
        goto loc_8000C350;
    }
}

loc_8000C2D4:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_2 & 7);
}

loc_8000C2E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_8000C350;
    }
}

loc_8000C2E4:
{
    r6 = MemoryInline::FlatRead32((r30 + 8));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r3 = (r3_rot_1 & 7);
    r0 = (r3 + -2);
}

loc_8000C2F4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8000C350;
    }
}

loc_8000C2F8:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r5 = MemoryInline::FlatRead32((r30 + 24));
}

loc_8000C304:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r5))) {
        goto loc_8000C314;
    }
}

loc_8000C308:
{
    r3 = MemoryInline::FlatRead32((r30 + 52));
}

loc_8000C310:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r3))) {
        goto loc_8000C324;
    }
}

loc_8000C314:
{
    r0 = MemoryInline::FlatRead32((r30 + 8));
    r0 = (r0 & 536870911);
    MemoryInline::FlatWrite32((r30 + 8), r0);
    goto loc_8000C35C;
}

loc_8000C324:
{
    r4 = MemoryInline::FlatRead32((r30 + 28));
    r3 = (r0 - r3);
    r0 = 2;
    r3 = (r4 + r3);
    MemoryInline::FlatWrite32((r30 + 36), r3);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r6_mrot_1 = (r6_rot_1 & -536870912);
    r6_mdest_1 = (r6 & 536870911);
    r6 = (r6_mdest_1 | r6_mrot_1);
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r5 - r0);
    MemoryInline::FlatWrite32((r30 + 40), r0);
    MemoryInline::FlatWrite32((r30 + 8), r6);
    goto loc_8000C35C;
}

loc_8000C350:
{
    r0 = MemoryInline::FlatRead32((r30 + 8));
    r0 = (r0 & 536870911);
    MemoryInline::FlatWrite32((r30 + 8), r0);
}

loc_8000C35C:
{
    r0 = MemoryInline::FlatRead32((r30 + 8));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_5 & 7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8000C364:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000C3C8;
    }
}

loc_8000C368:
{
    r12 = MemoryInline::FlatRead32((r30 + 56));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_8000C370:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000C3B4;
    }
}

loc_8000C374:
{
    r5 = r31;
    r4 = (r1 + 8);
    r3 = MemoryInline::FlatRead32(r30);
    r6 = MemoryInline::FlatRead32((r30 + 72));
    ctr = r12;
    ctx->lr = 0x8000C38Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8000C390:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000C3B4;
    }
}

loc_8000C394:
{
    r4 = 0;
    MemoryInline::FlatWrite32((r30 + 40), r4);
    r0 = 1;
    r3 = -1;
    MemoryInline::FlatWrite8((r30 + 10), static_cast<uint8_t>(r0));
    r0 = 40;
    MemoryInline::FlatWrite32((r13 + -27600), r0);
    goto loc_8000C3CC;
}

loc_8000C3B4:
{
    r3 = 0;
    MemoryInline::FlatWrite8((r30 + 9), static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite32((r30 + 24), r0);
    MemoryInline::FlatWrite32((r30 + 40), r3);
}

loc_8000C3C8:
{
    r3 = 0;
}

loc_8000C3CC:
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
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8000C220 func_8000C220 preserves=true fpr_mask=0x00000000
