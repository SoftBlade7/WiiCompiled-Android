#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801E796C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801E796C;

loc_801E796C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    // inline leaf 0x801DCF54 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -24380));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    // end of inlined leaf 0x801DCF54
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801E7988:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801E79A0;
    }
}

loc_801E798C:
{
    // inline leaf 0x801DCF68 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -24380));
    r0 = (r3 + -2);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x801DCF68
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801E7994:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801E79A0;
    }
}

loc_801E7998:
{
    r3 = -9;
    goto loc_801E7A18;
}

loc_801E79A0:
{
    r3 = (r1 + 8);
    ctx->lr = 0x801E79A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801E81B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801E79AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E79B4;
    }
}

loc_801E79B0:
{
    goto loc_801E7A18;
}

loc_801E79B4:
{
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801E79C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801E79D4;
    }
}

loc_801E79C4:
{
    r0 = 0;
    r3 = -5;
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_801E7A18;
}

loc_801E79D4:
{
    r3 = 65536;
    r6 = 0;
    r5 = (r3 + -1);
    r3 = 0;
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(0));
}

loc_801E79EC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801E7A10;
    }
}

loc_801E79F0:
{
    r0 = MemoryInline::FlatRead16((r4 + 1376));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
}

loc_801E79F8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801E7A04;
    }
}

loc_801E79FC:
{
    r5 = r0;
    r6 = r3;
}

loc_801E7A04:
{
    r4 = (r4 + 2);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801E79F0;
    }
}

loc_801E7A10:
{
    MemoryInline::FlatWrite32(r31, r6);
    r3 = 0;
}

loc_801E7A18:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801E796C func_801E796C preserves=true fpr_mask=0x00000000
