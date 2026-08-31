#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805B3470(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805B3470;

loc_805B3470:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0 = 128;
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r3;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r4 + 16));
    r4 = MemoryInline::FlatRead32((r3 + 4));
}

loc_805B34A4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_805B34B4;
    }
}

loc_805B34A8:
{
}

loc_805B34AC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_805B34B4;
    }
}

loc_805B34B0:
{
    r0 = 0;
}

loc_805B34B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805B34B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B34C4;
    }
}

loc_805B34BC:
{
    r30 = MemoryInline::FlatRead32(r3);
    goto loc_805B34C8;
}

loc_805B34C4:
{
    r30 = 0;
}

loc_805B34C8:
{
    r4 = 0x805B0000u;
    r3 = 32;
    r4 = (r4 + 13936);
    r5 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80063D20u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r30 + 232));
    r3 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    // inline leaf 0x8004EA50 (13 guest instruction(s))
}

loc_inl0_0x8004EA50:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 48));
}

loc_inl0_0x8004EA5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x8004EA68;
    }
}

loc_inl0_0x8004EA60:
{
    r3 = (r3 + r0);
    goto loc_inl0_0x8004EA6C;
}

loc_inl0_0x8004EA68:
{
    r3 = 0;
}

loc_inl0_0x8004EA6C:
{
}

loc_inl0_0x8004EA70:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x8004EA7C;
    }
}

loc_inl0_0x8004EA74:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_inl0_cont_8004EA50;
}

loc_inl0_0x8004EA7C:
{
    r3 = 0;
}

loc_inl0_cont_8004EA50:
{
    // end of inlined leaf 0x8004EA50
    r31 = r3;
    r30 = 0;
    goto loc_805B3528;
}

loc_805B34F8:
{
    r4 = r30;
    r3 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004E9F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r3 = (r1 + 12);
    r4 = (r29 + 252);
    r5 = (r29 + 284);
    r6 = (r29 + 204);
    r8 = (r1 + 16);
    r7 = 1;
    ctx->lr = 0x805B3524u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805B2740u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r30 = (r30 + 1);
}

loc_805B3528:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r31));
}

loc_805B352C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805B34F8;
    }
}

loc_805B3530:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFDF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805B3470 func_805B3470 preserves=true fpr_mask=0x00000000
