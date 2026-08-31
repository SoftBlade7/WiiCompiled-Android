#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80675724(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80675724;

loc_80675724:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 0x80380000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r3 = MemoryInline::FlatRead32((r5 + 24576));
    r0 = MemoryInline::FlatRead32((r3 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80675754:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8067578C;
    }
}

loc_80675758:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8067575C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8067579C;
    }
}

loc_80675760:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80675764:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806757AC;
    }
}

loc_80675768:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8067576C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806757BC;
    }
}

loc_80675770:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_80675774:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806757CC;
    }
}

loc_80675778:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_8067577C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806757DC;
    }
}

loc_80675780:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_80675784:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806757EC;
    }
}

loc_80675788:
{
    goto loc_806757FC;
}

loc_8067578C:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r31 = (r3 + 235);
    goto loc_80675808;
}

loc_8067579C:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r31 = (r3 + 238);
    goto loc_80675808;
}

loc_806757AC:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r31 = (r3 + 241);
    goto loc_80675808;
}

loc_806757BC:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r31 = (r3 + 244);
    goto loc_80675808;
}

loc_806757CC:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r31 = (r3 + 247);
    goto loc_80675808;
}

loc_806757DC:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r31 = (r3 + 250);
    goto loc_80675808;
}

loc_806757EC:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r31 = (r3 + 253);
    goto loc_80675808;
}

loc_806757FC:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r31 = (r3 + 256);
}

loc_80675808:
{
    ctx->lr = 0x8067580Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80675454u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 0x808C0000u;
    r7 = r3;
    r5 = MemoryInline::FlatRead32((r4 + 3416));
    r3 = r29;
    r4 = r30;
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8067582Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80011938u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
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
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80675724 func_80675724 preserves=true fpr_mask=0x00000000
