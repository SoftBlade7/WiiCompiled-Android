#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8023112C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8023112C;

loc_8023112C:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    r5 = r4;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80231144:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80231160;
    }
}

loc_80231148:
{
    r4 = MemoryInline::FlatRead32(r3);
    r3 = (r1 + 12);
    ctx->lr = 0x80231154u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x800730B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r3 = (r1 + 12);
    ctx->lr = 0x8023115Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80072F60u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    goto loc_802311DC;
}

loc_80231160:
{
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r0 = 1;
}

loc_8023116C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8023117C;
    }
}

loc_80231170:
{
}

loc_80231174:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(1))) {
        goto loc_8023117C;
    }
}

loc_80231178:
{
    r0 = 0;
}

loc_8023117C:
{
}

loc_80231180:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8023118C;
    }
}

loc_80231184:
{
    r4 = MemoryInline::FlatRead32(r3);
    goto loc_80231190;
}

loc_8023118C:
{
    r4 = 0;
}

loc_80231190:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80231194:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802311B0;
    }
}

loc_80231198:
{
    r0 = MemoryInline::FlatRead32((r4 + 232));
    r4 = r5;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004E990u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    goto loc_802311D8;
}

loc_802311B0:
{
}

loc_802311B4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(2))) {
        goto loc_802311C0;
    }
}

loc_802311B8:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_802311C4;
}

loc_802311C0:
{
    r3 = 0;
}

loc_802311C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_802311C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802311D4;
    }
}

loc_802311CC:
{
    r3 = MemoryInline::FlatRead32((r3 + 232));
    goto loc_802311D8;
}

loc_802311D4:
{
    r3 = 0;
}

loc_802311D8:
{
    r3 = (r3 + 28);
}

loc_802311DC:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF000007B gpr_write=0xF000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8023112C func_8023112C preserves=true fpr_mask=0x00000000
