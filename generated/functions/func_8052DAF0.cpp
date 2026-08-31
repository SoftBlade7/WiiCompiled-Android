#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8052DAF0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8052DAF0;

loc_8052DAF0:
{
    r4 = 0x80890000u;
    r5 = MemoryInline::FlatRead16((r3 + 222));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r4 = (r4 + 192);
    r0 = MemoryInline::FlatRead32(r4);
    r6 = 5;
}

loc_8052DB04:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(r0))) {
        goto loc_8052DB10;
    }
}

loc_8052DB08:
{
    r6 = 0;
    goto loc_8052DB5C;
}

loc_8052DB10:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_8052DB18:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(r0))) {
        goto loc_8052DB24;
    }
}

loc_8052DB1C:
{
    r6 = 1;
    goto loc_8052DB5C;
}

loc_8052DB24:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
}

loc_8052DB2C:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(r0))) {
        goto loc_8052DB38;
    }
}

loc_8052DB30:
{
    r6 = 2;
    goto loc_8052DB5C;
}

loc_8052DB38:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8052DB40:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(r0))) {
        goto loc_8052DB4C;
    }
}

loc_8052DB44:
{
    r6 = 3;
    goto loc_8052DB5C;
}

loc_8052DB4C:
{
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_8052DB54:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(r0))) {
        goto loc_8052DB5C;
    }
}

loc_8052DB58:
{
    r6 = 4;
}

loc_8052DB5C:
{
    r4 = 0x80890000u;
    r3 = MemoryInline::FlatRead16((r3 + 218));
    r4 = (r4 + 216);
    r0 = MemoryInline::FlatRead16(r4);
    r5 = 4;
}

loc_8052DB70:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8052DB7C;
    }
}

loc_8052DB74:
{
    r5 = 0;
    goto loc_8052DBB4;
}

loc_8052DB7C:
{
    r0 = MemoryInline::FlatRead16((r4 + 2));
}

loc_8052DB84:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8052DB90;
    }
}

loc_8052DB88:
{
    r5 = 1;
    goto loc_8052DBB4;
}

loc_8052DB90:
{
    r0 = MemoryInline::FlatRead16((r4 + 4));
}

loc_8052DB98:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8052DBA4;
    }
}

loc_8052DB9C:
{
    r5 = 2;
    goto loc_8052DBB4;
}

loc_8052DBA4:
{
    r0 = MemoryInline::FlatRead16((r4 + 6));
}

loc_8052DBAC:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8052DBB4;
    }
}

loc_8052DBB0:
{
    r5 = 3;
}

loc_8052DBB4:
{
    r3 = (r6 + r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(8));
}

loc_8052DBBC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_return;
    }
}

loc_8052DBC0:
{
    r3 = 7;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8052DAF0 func_8052DAF0 preserves=true fpr_mask=0x00000000
