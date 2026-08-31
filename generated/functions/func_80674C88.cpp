#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80674C88(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80674C88;

loc_80674C88:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80674CB0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80674CF8;
    }
}

loc_80674CB4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 28), r0);
    r3 = MemoryInline::FlatRead32((r3 + 30092));
    r12 = MemoryInline::FlatRead32((r3 + 24));
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x80674CD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80674CD4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80674CE4;
    }
}

loc_80674CD8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 32), static_cast<uint8_t>(r0));
    goto loc_80674CF8;
}

loc_80674CE4:
{
    r3 = MemoryInline::FlatRead32((r29 + 30092));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite32((r29 + 28), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80233184u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    goto loc_80674CFC;
}

loc_80674CF8:
{
    r3 = 0;
}

loc_80674CFC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80674D00:
{
    r30 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80674DB0;
    }
}

loc_80674D08:
{
    r3 = r31;
    ctx->lr = 0x80674D10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801DD044u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80674D14:
{
    r31 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80674D40;
    }
}

loc_80674D1C:
{
    // inline leaf 0x801DD220 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -24372));
    // end of inlined leaf 0x801DD220
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(-7));
}

loc_80674D24:
{
    MemoryInline::FlatWrite32((r29 + 28), r3);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80674D34;
    }
}

loc_80674D2C:
{
    r3 = 8;
    goto loc_80674D44;
}

loc_80674D34:
{
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8023318Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    goto loc_80674D44;
}

loc_80674D40:
{
    r3 = 0;
}

loc_80674D44:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80674D48:
{
    r30 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80674DB0;
    }
}

loc_80674D50:
{
    r0 = MemoryInline::FlatRead8((r29 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80674D58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80674D94;
    }
}

loc_80674D5C:
{
    r3 = MemoryInline::FlatRead32((r29 + 30092));
    r12 = MemoryInline::FlatRead32((r3 + 24));
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x80674D70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80674D74:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80674D84;
    }
}

loc_80674D78:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 32), static_cast<uint8_t>(r0));
    goto loc_80674D94;
}

loc_80674D84:
{
    r3 = MemoryInline::FlatRead32((r29 + 30092));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80233184u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r31 = r3;
    goto loc_80674D98;
}

loc_80674D94:
{
    r31 = 0;
}

loc_80674D98:
{
    r3 = r31;
    // inline leaf 0x802331F8 (9 guest instruction(s))
}

loc_inl1_0x802331F8:
{
    r0 = (r3 + -4);
}

loc_inl1_0x80233200:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl1_0x8023320C;
    }
}

loc_inl1_0x80233204:
{
}

loc_inl1_0x80233208:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(7))) {
        goto loc_inl1_0x80233214;
    }
}

loc_inl1_0x8023320C:
{
    r3 = 1;
    goto loc_inl1_cont_802331F8;
}

loc_inl1_0x80233214:
{
    r3 = 0;
}

loc_inl1_cont_802331F8:
{
    // end of inlined leaf 0x802331F8
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80674DA4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80674DB0;
    }
}

loc_80674DA8:
{
    r3 = r31;
    goto loc_80674DB4;
}

loc_80674DB0:
{
    r3 = r30;
}

loc_80674DB4:
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
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80674C88 func_80674C88 preserves=true fpr_mask=0x00000000
