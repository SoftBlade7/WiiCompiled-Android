#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D4164(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800D4164;

loc_800D4164:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    // inline leaf 0x800CCC54 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26968));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x800CCC54
}

loc_800D4178:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800D4184;
    }
}

loc_800D417C:
{
    r0 = 0;
    goto loc_800D41B8;
}

loc_800D4184:
{
    r0 = MemoryInline::FlatRead32((r13 + -26868));
}

loc_800D418C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800D41AC;
    }
}

loc_800D4190:
{
    // inline leaf 0x800D26CC (7 guest instruction(s))
}

loc_inl1_0x800D26CC:
{
    r3 = MemoryInline::FlatRead32((r13 + -26896));
}

loc_inl1_0x800D26D4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x800D26E0;
    }
}

loc_inl1_0x800D26D8:
{
    r3 = MemoryInline::FlatRead32((r3 + 36));
    goto loc_inl1_cont_800D26CC;
}

loc_inl1_0x800D26E0:
{
    r3 = 0;
}

loc_inl1_cont_800D26CC:
{
    // end of inlined leaf 0x800D26CC
}

loc_800D4198:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_800D41AC;
    }
}

loc_800D419C:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = MemoryInline::FlatRead8((r3 + 1826));
}

loc_800D41A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800D41B4;
    }
}

loc_800D41AC:
{
    r0 = 0;
    goto loc_800D41B8;
}

loc_800D41B4:
{
    r0 = 1;
}

loc_800D41B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800D41BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D41CC;
    }
}

loc_800D41C0:
{
    ctx->lr = 0x800D41C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800E09ACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 1;
    goto loc_800D41E4;
}

loc_800D41CC:
{
    r4 = 0x80270000u;
    r3 = 4;
    r4 = (r4 + 28816);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800D41E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800CD068u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
}

loc_800D41E4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800D4164 func_800D4164 preserves=true fpr_mask=0x00000000
