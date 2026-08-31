#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CEB6C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800CEB6C;

loc_800CEB6C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    r0 = MemoryInline::FlatRead32((r13 + -26928));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800CEB94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CEBA0;
    }
}

loc_800CEB98:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800CEB9C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CEBA8;
    }
}

loc_800CEBA0:
{
    r3 = -1;
    goto loc_800CEC14;
}

loc_800CEBA8:
{
    r29 = 0;
    r31 = 0;
    goto loc_800CEC00;
}

loc_800CEBB4:
{
    r30 = MemoryInline::FlatRead32((r3 + 28));
}

loc_800CEBBC:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_800CEBC8;
    }
}

loc_800CEBC0:
{
    r3 = 0;
    goto loc_800CEBE8;
}

loc_800CEBC8:
{
    // inline leaf 0x800D0274 (7 guest instruction(s))
}

loc_inl0_0x800D0274:
{
    r3 = MemoryInline::FlatRead32((r13 + -26904));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl0_0x800D027C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_0x800D0288;
    }
}

loc_inl0_0x800D0280:
{
    r3 = MemoryInline::FlatRead32((r3 + 28));
    goto loc_inl0_cont_800D0274;
}

loc_inl0_0x800D0288:
{
    r3 = 0;
}

loc_inl0_cont_800D0274:
{
    // end of inlined leaf 0x800D0274
    r4 = (r30 + r31);
    ctx->lr = 0x800CEBD4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800EC498u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800CEBD8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800CEBE4;
    }
}

loc_800CEBDC:
{
}

loc_800CEBE0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(-1))) {
        goto loc_800CEBE8;
    }
}

loc_800CEBE4:
{
    r3 = 0;
}

loc_800CEBE8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(r3));
}

loc_800CEBEC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CEBF8;
    }
}

loc_800CEBF0:
{
    r3 = r29;
    goto loc_800CEC14;
}

loc_800CEBF8:
{
    r31 = (r31 + 12);
    r29 = (r29 + 1);
}

loc_800CEC00:
{
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(r0));
}

loc_800CEC0C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800CEBB4;
    }
}

loc_800CEC10:
{
    r3 = -1;
}

loc_800CEC14:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
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

// RECOMP_GUEST_ABI gpr_read=0xFE002FFB gpr_write=0xFE001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800CEB6C func_800CEB6C preserves=true fpr_mask=0x00000000
