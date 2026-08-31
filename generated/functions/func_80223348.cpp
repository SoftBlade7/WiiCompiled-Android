#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80223348(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80223348;

loc_80223348:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f31.d);
    f31.d = f1.d;
    MemoryInline::FlatWriteRam32((r1 + 20), r31);
    MemoryInline::FlatWriteRam32((r1 + 16), r30);
    MemoryInline::FlatWriteRam32((r1 + 12), r29);
    r29 = r3;
    r3 = (r3 + 116);
    // inline leaf 0x800375C0 (11 guest instruction(s))
}

loc_inl0_0x800375C0:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl0_0x800375C8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800375D4;
    }
}

loc_inl0_0x800375CC:
{
    r3 = 0;
    goto loc_inl0_cont_800375C0;
}

loc_inl0_0x800375D4:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 - r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
}

loc_inl0_cont_800375C0:
{
    // end of inlined leaf 0x800375C0
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80223378:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802233BC;
    }
}

loc_8022337C:
{
    r3 = (r29 + 116);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800375F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    // inline leaf 0x80026DA0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 44));
    // end of inlined leaf 0x80026DA0
    r31 = (r3 & 65535);
    r30 = 0;
    goto loc_802233B4;
}

loc_80223394:
{
    r3 = (r29 + 116);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800375F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r4 = (r30 & 65535);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80026DB0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
}

loc_802233A8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802233B0;
    }
}

loc_802233AC:
{
    MemoryInline::FlatWriteFloat32((r3 + 104), f31.d);
}

loc_802233B0:
{
    r30 = (r30 + 1);
}

loc_802233B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r31));
}

loc_802233B8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80223394;
    }
}

loc_802233BC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 24));
    r31 = MemoryInline::FlatRead32((r1 + 20));
    r30 = MemoryInline::FlatRead32((r1 + 16));
    r29 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000007B gpr_write=0xE000007B gpr_return=0x00000018 fpr_read=0x80000002 fpr_write=0x80000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80223348 func_80223348 preserves=false fpr_mask=0x80000000
