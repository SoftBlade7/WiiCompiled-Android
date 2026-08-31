#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80651A90(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r19_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80651A90;

loc_80651A90:
{
    r23 = MemoryInline::FlatRead32((r4 + 152));
    r19_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r16), static_cast<uint32_t>(2));
    r19 = (r19_rot_0 & 1020);
    r3 = MemoryInline::FlatRead32((r30 + 8448));
    r4 = (r17 & 255);
    r5 = (r16 & 255);
    // inline leaf 0x80660654 (14 guest instruction(s))
}

loc_inl0_0x80660654:
{
    r0 = MemoryInline::FlatRead8((r3 + 61));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl0_0x8066065C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_0x80660684;
    }
}

loc_inl0_0x80660660:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r4 = MemoryInline::FlatRead32((r3 + 44));
    r0 = (r5 + r0);
    r3 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r4 & r0);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    goto loc_inl0_cont_80660654;
}

loc_inl0_0x80660684:
{
    r3 = 2;
}

loc_inl0_cont_80660654:
{
    // end of inlined leaf 0x80660654
    r4 = (r20 + r23);
    r0 = (r19 + r20);
    r4 = (r19 + r4);
    MemoryInline::FlatWrite32((r4 + 740), r3);
    r3 = MemoryInline::FlatRead32((r31 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 740));
    MemoryInline::FlatWrite32((r22 + 504), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[19] = r19;
    ctx->gpr[23] = r23;
    ctx->cr = cr;
    InvokeDirectCpu<0x80651B1Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[19] = r19;
    ctx->gpr[23] = r23;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFF77FFD6 gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFE cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80651A90 func_80651A90 preserves=true fpr_mask=0x00000000
