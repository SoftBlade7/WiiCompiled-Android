#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8065B780(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8065B780;

loc_8065B780:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 3;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = (r3 + 4);
    r3 = 0;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r7;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r6;
    ctr = r0;
}

loc_8065B7B0:
{
    r0 = MemoryInline::FlatRead8((r31 + 25));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8065B7B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065B7C0;
    }
}

loc_8065B7BC:
{
    goto loc_8065B85C;
}

loc_8065B7C0:
{
    r0 = MemoryInline::FlatRead8((r31 + 57));
    r31 = (r31 + 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8065B7CC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065B7D4;
    }
}

loc_8065B7D0:
{
    goto loc_8065B85C;
}

loc_8065B7D4:
{
    r0 = MemoryInline::FlatRead8((r31 + 57));
    r31 = (r31 + 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8065B7E0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065B7E8;
    }
}

loc_8065B7E4:
{
    goto loc_8065B85C;
}

loc_8065B7E8:
{
    r0 = MemoryInline::FlatRead8((r31 + 57));
    r31 = (r31 + 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8065B7F4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065B7FC;
    }
}

loc_8065B7F8:
{
    goto loc_8065B85C;
}

loc_8065B7FC:
{
    r0 = MemoryInline::FlatRead8((r31 + 57));
    r31 = (r31 + 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8065B808:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065B810;
    }
}

loc_8065B80C:
{
    goto loc_8065B85C;
}

loc_8065B810:
{
    r0 = MemoryInline::FlatRead8((r31 + 57));
    r31 = (r31 + 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8065B81C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065B824;
    }
}

loc_8065B820:
{
    goto loc_8065B85C;
}

loc_8065B824:
{
    r0 = MemoryInline::FlatRead8((r31 + 57));
    r31 = (r31 + 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8065B830:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065B838;
    }
}

loc_8065B834:
{
    goto loc_8065B85C;
}

loc_8065B838:
{
    r0 = MemoryInline::FlatRead8((r31 + 57));
    r31 = (r31 + 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8065B844:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065B84C;
    }
}

loc_8065B848:
{
    goto loc_8065B85C;
}

loc_8065B84C:
{
    r31 = (r31 + 32);
    r3 = (r3 + 7);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8065B7B0;
    }
}

loc_8065B858:
{
    r31 = 0;
}

loc_8065B85C:
{
    r3 = 0x809C0000u;
    r0 = 1;
    r6 = MemoryInline::FlatRead32((r3 + -10448));
    r3 = (r31 + 4);
    r6 = MemoryInline::FlatRead32((r6 + 32));
    r6 = (r6 + 200);
    MemoryInline::FlatWrite32(r31, r6);
    MemoryInline::FlatWrite8((r31 + 25), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 26), static_cast<uint8_t>(r4));
    r4 = 0;
    MemoryInline::FlatWrite8((r31 + 27), static_cast<uint8_t>(r5));
    r5 = 21;
    ctx->lr = 0x8065B890u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8065B894:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065B8B0;
    }
}

loc_8065B898:
{
    r4 = r29;
    r5 = r30;
    r3 = (r31 + 4);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite8((r31 + 28), static_cast<uint8_t>(r30));
    goto loc_8065B8B8;
}

loc_8065B8B0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 28), static_cast<uint8_t>(r0));
}

loc_8065B8B8:
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
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE00000FB gpr_write=0xE00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8065B780 func_8065B780 preserves=true fpr_mask=0x00000000
