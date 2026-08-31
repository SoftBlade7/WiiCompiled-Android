#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80232B3C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80232B3C;

loc_80232B3C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r5;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    r3 = r4;
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    ctx->lr = 0x80232B74u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801E42E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 + 21);
    r31 = r3;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
}

loc_80232B80:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80232BD8;
    }
}

loc_80232B84:
{
}

loc_80232B88:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80232BB0;
    }
}

loc_80232B8C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-41));
}

loc_80232B90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80232BD8;
    }
}

loc_80232B94:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-46));
}

loc_80232B98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80232BD8;
    }
}

loc_80232B9C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-9));
}

loc_80232BA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80232BEC;
    }
}

loc_80232BA4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-7));
}

loc_80232BA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80232BEC;
    }
}

loc_80232BAC:
{
    goto loc_80232C00;
}

loc_80232BB0:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80232BB8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80232BC4;
    }
}

loc_80232BBC:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
}

loc_80232BC4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 4), r0);
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 8), r3);
    goto loc_80232C0C;
}

loc_80232BD8:
{
    // inline leaf 0x801DD220 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -24372));
    // end of inlined leaf 0x801DD220
    MemoryInline::FlatWrite32((r28 + 4), r3);
    r0 = 2;
    MemoryInline::FlatWrite32((r28 + 8), r31);
    goto loc_80232C0C;
}

loc_80232BEC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 4), r0);
    r0 = 3;
    MemoryInline::FlatWrite32((r28 + 8), r3);
    goto loc_80232C0C;
}

loc_80232C00:
{
    MemoryInline::FlatWrite32((r28 + 4), r30);
    r0 = 4;
    MemoryInline::FlatWrite32((r28 + 8), r3);
}

loc_80232C0C:
{
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r3 = r0;
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80232B3C func_80232B3C preserves=true fpr_mask=0x00000000
