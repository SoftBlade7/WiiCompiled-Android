#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800C7DF0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800C7DF0;

loc_800C7DF0:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    MemoryInline::FlatWriteRam32((r1 + 108), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 104), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 100), r29);
    r29 = r3;
    // inline leaf 0x800BC370 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x800BC370
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800C7E1C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C7E28;
    }
}

loc_800C7E20:
{
    r3 = 1;
    goto loc_800C7EC4;
}

loc_800C7E28:
{
}

loc_800C7E2C:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_800C7E3C;
    }
}

loc_800C7E30:
{
}

loc_800C7E34:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(6))) {
        goto loc_800C7E58;
    }
}

loc_800C7E38:
{
    goto loc_800C7E74;
}

loc_800C7E3C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(100));
}

loc_800C7E40:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800C7E4C;
    }
}

loc_800C7E44:
{
    r3 = 15;
    goto loc_800C7EC4;
}

loc_800C7E4C:
{
    r3 = r31;
    ctx->lr = 0x800C7E54u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800C6AF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_800C7E78;
}

loc_800C7E58:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(6));
}

loc_800C7E5C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800C7E68;
    }
}

loc_800C7E60:
{
    r3 = 15;
    goto loc_800C7EC4;
}

loc_800C7E68:
{
    r3 = r31;
    // inline leaf 0x800CA7D0 (9 guest instruction(s))
}

loc_inl1_0x800CA7D0:
{
}

loc_inl1_0x800CA7D4:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(6))) {
        goto loc_inl1_0x800CA7E0;
    }
}

loc_inl1_0x800CA7D8:
{
    r3 = 0;
    goto loc_inl1_cont_800CA7D0;
}

loc_inl1_0x800CA7E0:
{
    r0 = (r3 * 74);
    r3 = 0x80250000u;
    r3 = (r3 + -15152);
    r3 = (r3 + r0);
}

loc_inl1_cont_800CA7D0:
{
    // end of inlined leaf 0x800CA7D0
    goto loc_800C7E78;
}

loc_800C7E74:
{
    r3 = 0;
}

loc_800C7E78:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800C7E7C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C7E88;
    }
}

loc_800C7E80:
{
    r3 = 10;
    goto loc_800C7EC4;
}

loc_800C7E88:
{
    r4 = r3;
    r3 = (r1 + 8);
    r5 = 74;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWriteRam16((r1 + 82), static_cast<uint16_t>(r0));
    r3 = (r1 + 8);
    r4 = 76;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x800C78D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam16((r1 + 82), static_cast<uint16_t>(r3));
    r3 = r29;
    r4 = (r1 + 8);
    r5 = 76;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
}

loc_800C7EC4:
{
    r0 = MemoryInline::FlatRead32((r1 + 116));
    r31 = MemoryInline::FlatRead32((r1 + 108));
    r30 = MemoryInline::FlatRead32((r1 + 104));
    r29 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF80023FB gpr_write=0xF8001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800C7DF0 func_800C7DF0 preserves=true fpr_mask=0x00000000
