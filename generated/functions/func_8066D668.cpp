#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8066D668(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8066D668;

loc_8066D668:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 12;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    r3 = (r1 + 12);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    ctx->lr = 0x8066D69Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 10;
    r3 = (r1 + 12);
    r5 = 0;
    ctr = r0;
}

loc_8066D6AC:
{
    r0 = MemoryInline::FlatRead16(r30);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8066D6B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066D6C0;
    }
}

loc_8066D6B8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(32));
}

loc_8066D6BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066D704;
    }
}

loc_8066D6C0:
{
    r4 = 0x808A0000u;
    r3 = (r1 + 12);
    r4 = (r4 + -21928);
    r0 = 32;
    r3_addr_1 = (r3 + r5);
    MemoryInline::FlatWrite8(r3_addr_1, static_cast<uint8_t>(r0));
    r4 = (r4 + 48);
    r5 = (r1 + 8);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8066D6E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80013040u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-1));
}

loc_8066D6E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066D6FC;
    }
}

loc_8066D6EC:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = 1;
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_8066D71C;
}

loc_8066D6FC:
{
    r3 = 0;
    goto loc_8066D71C;
}

loc_8066D704:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r30 = (r30 + 2);
    r3 = (r3 + 1);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8066D6AC;
    }
}

loc_8066D718:
{
    r3 = 0;
}

loc_8066D71C:
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFE7FF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8066D668 func_8066D668 preserves=true fpr_mask=0x00000000
